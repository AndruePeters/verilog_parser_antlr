#ifndef PARSER_CONVERSIONS_H
#define PARSER_CONVERSIONS_H

#include <circuit_def.h>
#include "Verilog2001Parser.h"

Circuit::Definition::Port to_port(Verilog2001Parser::Port_declarationContext* port);
Circuit::BitWidth to_bitwidth(Verilog2001Parser::Range_Context* range);
Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext * mod);

#endif