
// Generated from Verilog2001.g4 by ANTLR 4.7.2


#include "Verilog2001BaseListener.h"
#include "circuit_def.h"


void Verilog2001BaseListener::enterModule_declaration(Verilog2001Parser::Module_declarationContext* modDecl) {
    const auto mod = to_module_definition(modDecl);
    circuit.addModule(mod);

    if (modDecl->list_of_port_declarations() == nullptr) return;
    for (auto& port: modDecl->list_of_port_declarations()->port_declaration()) {
        const auto portDef = to_port(port);
        circuit.getModule().addPort(portDef);
    }
    //std::cout << "Module Decl: " << circuit.getModule().name() << std::endl;
}

void Verilog2001BaseListener::enterPort_declaration(Verilog2001Parser::Port_declarationContext*) {
    //Circuit::Definition::Port myPort = to_port(port);
    //circuit.getModule().addPort(myPort);
    //std::cout << "port name: " << myPort.name() << " [" << myPort.width().lsb << "," << myPort.width().msb << "]\n";
}

void Verilog2001BaseListener::enterNet_declaration(Verilog2001Parser::Net_declarationContext* net) {
    auto& module = circuit.getModule();
    module.addNet(to_net(net));
}

void Verilog2001BaseListener::enterGate_instantiation(Verilog2001Parser::Gate_instantiationContext* gate) {
    const auto& primitive = to_primitive(gate);
    circuit.getModule().addPrimitive((std::move(primitive)));
}

void Verilog2001BaseListener::enterModule_instantiation(Verilog2001Parser::Module_instantiationContext* inst/*ctx*/) {
    const auto instance = to_instance(inst);
    circuit.getModule().addInstance(std::move(instance));
}

void Verilog2001BaseListener::enterContinuous_assign(Verilog2001Parser::Continuous_assignContext* assign) {
    std::cout << "continuous assighment: " << assign->getText() << std::endl;
}
