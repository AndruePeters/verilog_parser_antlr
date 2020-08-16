#include "parser_conversions.h"

#include <string>

Circuit::Definition::Port to_port(Verilog2001Parser::Port_declarationContext* port)
{
    Circuit::PortDir dir;
    std::string name;
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

    auto lsbPtr = range->lsb_constant_expression();
    auto msbPtr = range->msb_constant_expression();
    const int lsb = std::stoi(lsbPtr->getText());
    const int msb = std::stoi(msbPtr->getText()); 

    return {lsb, msb};
}

Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext * modDecl)
{
    return {modDecl->module_identifier()->identifier()->getText()};
}