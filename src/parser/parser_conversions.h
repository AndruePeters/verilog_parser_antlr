/// Andrue Peters
/// 08/18/2020
/// Converts ANTLR Parser objects to Circuit::Definition objects 

#ifndef PARSER_CONVERSIONS_H
#define PARSER_CONVERSIONS_H

#include <circuit_def.h>
#include "Verilog2001Parser.h"

/// \brief Convert ANTRL port to Circuit::Definition::Port
Circuit::Definition::Port to_port(Verilog2001Parser::Port_declarationContext* port);

/// \brief Convert ANTLR Range_Context to Circuit::BitWidth
Circuit::BitWidth to_bitwidth(Verilog2001Parser::Range_Context* range);

/// \brief Convert ANTLR module declaration to Circuit::Definition::ModuleDefinition
Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext * mod);

/// \brief Convert ANTLR module instance to Circuit::Definition::InstanceDefinition
Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Module_instantiationContext * inst);

/// \brief Convert ANTRL net delcaration to Circuit::Definition::Net
Circuit::Definition::Net to_net(Verilog2001Parser::Net_declarationContext * net);
#endif