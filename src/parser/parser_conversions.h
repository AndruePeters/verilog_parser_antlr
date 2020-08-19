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
Circuit::Definition::ModuleDefinition to_module_definition(Verilog2001Parser::Module_declarationContext* mod);

/// \brief Convert ANTLR module instance to Circuit::Definition::InstanceDefinition
Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Module_instantiationContext* inst);

/// \brief Convert ANTLR gate instance to Circuit::Definition::InstanceDefinition
Circuit::Definition::InstanceDefinition to_instance(Verilog2001Parser::Gate_instantiationContext* gate);

/// \brief Convert ANTLR net delcaration to Circuit::Definition::Net
Circuit::Definition::Net to_net(Verilog2001Parser::Net_declarationContext* net);

/// \brief Convert ANTLR gate to Circuit::Definition::VerilogPrimitive
Circuit::Definition::VerilogPrimitive to_primitive(Verilog2001Parser::Gate_instantiationContext* gate);

#endif