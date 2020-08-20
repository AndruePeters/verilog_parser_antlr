/// Andrue Peters
/// 08/18/2020
/// Converts ANTLR Parser objects to Circuit::Definition objects 

#include "parser_conversions.h"

#include <string>

Circuit::Definition::Port to_port(Verilog2001Parser::Port_declarationContext* port) {
    Circuit::PortDir dir = Circuit::PortDir::input;
    std::string name = "unitialized";
    Circuit::BitWidth bw;

    if (port->inout_declaration() != nullptr) {
        dir = Circuit::PortDir::inout;
        name = port->inout_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->inout_declaration()->range_());
    } else if (port->input_declaration() != nullptr) {
        dir = Circuit::PortDir::input;
        name = port->input_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->input_declaration()->range_());
    } else if (port->output_declaration() != nullptr) {
        dir = Circuit::PortDir::output;
        name = port->output_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->output_declaration()->range_());
    } else {
        throw std::runtime_error("All port declaration are nullptr. Something very wrong happened.");
    }

    Circuit::Definition::Port portDef(std::move(name), bw);
    portDef.setPortDirection(dir);
    return portDef;
}

Circuit::BitWidth to_bitwidth(Verilog2001Parser::Range_Context* range) {
    if (range == nullptr) return {0, 0};

    const int lsb = std::stoi(range->lsb_constant_expression()->getText());
    const int msb = std::stoi(range->msb_constant_expression()->getText());

    return {lsb, msb};
}

Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext* modDecl) {
    return {modDecl->module_identifier()->identifier()->getText()};
}

Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Module_instantiationContext* inst) {
    const std::string type = inst->module_identifier()->getText();
    const std::string name = inst->module_instance().front()->name_of_instance()->getText();

    return Circuit::Definition::InstanceDefinition(type, name);
}

Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Gate_instantiationContext* gate) {
    std::string gateType = "gate";
    std::string gateName = "gateName";

    if (gate->n_output_gatetype() != nullptr) {
        gateType = gate->n_output_gatetype()->getText();
        gateName = gate->n_output_gate_instance().front()->getText();
        std::cout << "n_output input: " << gate->n_output_gate_instance().front()->input_terminal()->getText()
                  << std::endl;
    } else if (gate->n_input_gatetype() != nullptr) {
        gateType = gate->n_input_gatetype()->getText();
        gateName = gate->n_input_gate_instance().front()->getText();
    }

    Circuit::Definition::InstanceDefinition gateInst(gateType, gateName);

    std::cout << "gate_type: " << gateType << "\t\tgate_name: " << gateName << std::endl;
    return gateInst;
}

Circuit::Definition::Net to_net(Verilog2001Parser::Net_declarationContext* net) {
    const auto bw = to_bitwidth(net->range_());
    return Circuit::Definition::Net(net->net_type()->getText(),
                                    net->list_of_net_identifiers()->net_identifier().front()->getText(), bw);
}

Circuit::Definition::VerilogPrimitive to_primitive(Verilog2001Parser::Gate_instantiationContext* gate) {
    /// Handle n_output gates.
    if (gate->n_output_gatetype() != nullptr) {
        const std::string type = gate->n_output_gatetype()->getText();
        const std::string name = gate->n_output_gate_instance().front()->name_of_gate_instance()->getText();
        auto prim = Circuit::Definition::VerilogPrimitive(std::move(type), std::move(name));
        prim.addInput(gate->n_output_gate_instance().front()->input_terminal()->getText());

        for (auto outTerminal: gate->n_output_gate_instance().front()->output_terminal()) {
            prim.addOutput(outTerminal->getText());
        }
        return prim;

    } else if (gate->n_input_gatetype() != nullptr) {
        /// Handle n_input gates
        const std::string type = gate->n_input_gatetype()->getText();
        const std::string name = gate->n_input_gate_instance().front()->name_of_gate_instance()->getText();
        auto prim = Circuit::Definition::VerilogPrimitive(std::move(type), std::move(name));
        prim.addOutput(gate->n_input_gate_instance().front()->output_terminal()->getText());

        for (auto inTerminal: gate->n_input_gate_instance().front()->input_terminal()) {
            prim.addInput(inTerminal->getText());
        }
        return prim;
    } else if (gate->enable_gatetype() != nullptr) {
        /// Handle gates with enables
        const std::string type = gate->enable_gatetype()->getText();
        const std::string name = gate->enable_gate_instance().front()->name_of_gate_instance()->getText();
        const std::string enableTerminal = gate->enable_gate_instance().front()->enable_terminal()->getText();
        const std::string input = gate->enable_gate_instance().front()->input_terminal()->getText();
        const std::string output = gate->enable_gate_instance().front()->output_terminal()->getText();

        auto prim = Circuit::Definition::VerilogPrimitive(std::move(type), std::move(name));
        prim.addEnable(std::move(enableTerminal));
        prim.addInput(std::move(input));
        prim.addOutput(std::move(output));
        return prim;
    }

    throw std::runtime_error("Gate type not supported yet.");
}


