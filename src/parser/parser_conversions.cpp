/// Andrue Peters
/// 08/18/2020
/// Converts ANTLR Parser objects to Circuit::Definition objects 

#include "parser_conversions.h"

#include <string>

Circuit::Definition::Port to_port(Verilog2001Parser::Port_declarationContext* port)
{
    Circuit::PortDir dir = Circuit::PortDir::input;
    std::string name = "unitialized";
    Circuit::BitWidth bw;

    if (port->inout_declaration() != nullptr) {
        dir =  Circuit::PortDir::inout;
        name = port->inout_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->inout_declaration()->range_());
    } else if (port->input_declaration() != nullptr) {
        dir =  Circuit::PortDir::input;
        name = port->input_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->input_declaration()->range_());
    } else if (port->output_declaration() != nullptr) {
        dir =  Circuit::PortDir::output;
        name = port->output_declaration()->list_of_port_identifiers()->port_identifier().front()->getText();
        bw = to_bitwidth(port->output_declaration()->range_());
    }

    Circuit::Definition::Port portDef (std::move(name), bw);
    portDef.setPortDirection(dir);
    return portDef;
}

Circuit::BitWidth to_bitwidth(Verilog2001Parser::Range_Context* range)
{
    if (range == nullptr) return {0, 0};

    const int lsb = std::stoi(range->lsb_constant_expression()->getText());
    const int msb = std::stoi(range->msb_constant_expression()->getText()); 

    return {lsb, msb};
}

Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext * modDecl)
{
    return {modDecl->module_identifier()->identifier()->getText()};
}

Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Module_instantiationContext * inst)
{
    const std::string type = inst->module_identifier()->getText();
    const std::string name = inst->module_instance().front()->name_of_instance()->getText();

    Circuit::Definition::InstanceDefinition instance (type, name);
    return instance;
}

Circuit::Definition::Net to_net(Verilog2001Parser::Net_declarationContext * net)
{
    const auto bw = to_bitwidth(net->range_());
    return Circuit::Definition::Net(net->net_type()->getText(), net->list_of_net_identifiers()->net_identifier().front()->getText(), bw);
}