
// Generated from Verilog2001.g4 by ANTLR 4.7.2

#pragma once


#include <antlr4-runtime/antlr4-runtime.h>
#include "Verilog2001Listener.h"
#include <iostream>

#include "parser_conversions.h"
#include <circuit_builder.h>


/**
 * This class provides an empty implementation of Verilog2001Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class Verilog2001BaseListener : public Verilog2001Listener {
public:
    CircuitBuilder circuit;

     void enterConfig_declaration(Verilog2001Parser::Config_declarationContext* /*ctx*/) override {}

     void exitConfig_declaration(Verilog2001Parser::Config_declarationContext* /*ctx*/) override {}

     void enterDesign_statement(Verilog2001Parser::Design_statementContext* /*ctx*/) override {}

     void exitDesign_statement(Verilog2001Parser::Design_statementContext* /*ctx*/) override {}

     void enterConfig_rule_statement(Verilog2001Parser::Config_rule_statementContext* /*ctx*/) override {}

     void exitConfig_rule_statement(Verilog2001Parser::Config_rule_statementContext* /*ctx*/) override {}

     void enterDefault_clause(Verilog2001Parser::Default_clauseContext* /*ctx*/) override {}

     void exitDefault_clause(Verilog2001Parser::Default_clauseContext* /*ctx*/) override {}

     void enterInst_clause(Verilog2001Parser::Inst_clauseContext* /*ctx*/) override {}

     void exitInst_clause(Verilog2001Parser::Inst_clauseContext* /*ctx*/) override {}

     void enterInst_name(Verilog2001Parser::Inst_nameContext* /*ctx*/) override {}

     void exitInst_name(Verilog2001Parser::Inst_nameContext* /*ctx*/) override {}

     void enterLiblist_clause(Verilog2001Parser::Liblist_clauseContext* /*ctx*/) override {}

     void exitLiblist_clause(Verilog2001Parser::Liblist_clauseContext* /*ctx*/) override {}

     void enterCell_clause(Verilog2001Parser::Cell_clauseContext* /*ctx*/) override {}

     void exitCell_clause(Verilog2001Parser::Cell_clauseContext* /*ctx*/) override {}

     void enterUse_clause(Verilog2001Parser::Use_clauseContext* /*ctx*/) override {}

     void exitUse_clause(Verilog2001Parser::Use_clauseContext* /*ctx*/) override {}

     void enterSource_text(Verilog2001Parser::Source_textContext* /*ctx*/) override {}

     void exitSource_text(Verilog2001Parser::Source_textContext* /*ctx*/) override {}

     void enterDescription(Verilog2001Parser::DescriptionContext* /*ctx*/) override {}

     void exitDescription(Verilog2001Parser::DescriptionContext* /*ctx*/) override {}

     void enterModule_declaration(Verilog2001Parser::Module_declarationContext* modDecl);

     void exitModule_declaration(Verilog2001Parser::Module_declarationContext* /*ctx*/) override {}

     void enterModule_keyword(Verilog2001Parser::Module_keywordContext* /*ctx*/) override {}

     void exitModule_keyword(Verilog2001Parser::Module_keywordContext* /*ctx*/) override {}

     void
    enterModule_parameter_port_list(Verilog2001Parser::Module_parameter_port_listContext* /*ctx*/) override {}

     void
    exitModule_parameter_port_list(Verilog2001Parser::Module_parameter_port_listContext* /*ctx*/) override {}

     void enterList_of_ports(Verilog2001Parser::List_of_portsContext* /*ctx*/) override {}

     void exitList_of_ports(Verilog2001Parser::List_of_portsContext* /*ctx*/) override {}

     void
    enterList_of_port_declarations(Verilog2001Parser::List_of_port_declarationsContext* /*ctx*/) override {}

     void exitList_of_port_declarations(Verilog2001Parser::List_of_port_declarationsContext* /*ctx*/) override {}

     void enterPort(Verilog2001Parser::PortContext* port/*ctx*/) override {

    }

     void exitPort(Verilog2001Parser::PortContext* /*ctx*/) override {}

     void enterPort_expression(Verilog2001Parser::Port_expressionContext* /*ctx*/) override {}

     void exitPort_expression(Verilog2001Parser::Port_expressionContext* /*ctx*/) override {}

     void enterPort_reference(Verilog2001Parser::Port_referenceContext* /*ctx*/) override {}

     void exitPort_reference(Verilog2001Parser::Port_referenceContext* /*ctx*/) override {}

     void enterPort_declaration(Verilog2001Parser::Port_declarationContext* port /*ctx*/);

     void exitPort_declaration(Verilog2001Parser::Port_declarationContext* /*ctx*/) override {}

     void enterModule_item(Verilog2001Parser::Module_itemContext* /*ctx*/) override {}

     void exitModule_item(Verilog2001Parser::Module_itemContext* /*ctx*/) override {}

     void enterModule_or_generate_item(Verilog2001Parser::Module_or_generate_itemContext* /*ctx*/) override {}

     void exitModule_or_generate_item(Verilog2001Parser::Module_or_generate_itemContext* /*ctx*/) override {}

     void enterNon_port_module_item(Verilog2001Parser::Non_port_module_itemContext* /*ctx*/) override {}

     void exitNon_port_module_item(Verilog2001Parser::Non_port_module_itemContext* /*ctx*/) override {}

     void enterModule_or_generate_item_declaration(
            Verilog2001Parser::Module_or_generate_item_declarationContext* /*ctx*/) override {}

     void exitModule_or_generate_item_declaration(
            Verilog2001Parser::Module_or_generate_item_declarationContext* /*ctx*/) override {}

     void enterParameter_override(Verilog2001Parser::Parameter_overrideContext* /*ctx*/) override {}

     void exitParameter_override(Verilog2001Parser::Parameter_overrideContext* /*ctx*/) override {}

     void
    enterLocal_parameter_declaration(Verilog2001Parser::Local_parameter_declarationContext* /*ctx*/) override {}

     void
    exitLocal_parameter_declaration(Verilog2001Parser::Local_parameter_declarationContext* /*ctx*/) override {}

     void enterParameter_declaration(Verilog2001Parser::Parameter_declarationContext* /*ctx*/) override {}

     void exitParameter_declaration(Verilog2001Parser::Parameter_declarationContext* /*ctx*/) override {}

     void enterParameter_declaration_(Verilog2001Parser::Parameter_declaration_Context* /*ctx*/) override {}

     void exitParameter_declaration_(Verilog2001Parser::Parameter_declaration_Context* /*ctx*/) override {}

     void enterSpecparam_declaration(Verilog2001Parser::Specparam_declarationContext* /*ctx*/) override {}

     void exitSpecparam_declaration(Verilog2001Parser::Specparam_declarationContext* /*ctx*/) override {}

     void enterInout_declaration(Verilog2001Parser::Inout_declarationContext* inout) override {}

     void exitInout_declaration(Verilog2001Parser::Inout_declarationContext* /*ctx*/) override {}

     void enterInput_declaration(Verilog2001Parser::Input_declarationContext* /*ctx*/) override {}

     void exitInput_declaration(Verilog2001Parser::Input_declarationContext* /*ctx*/) override {}

     void enterOutput_declaration(Verilog2001Parser::Output_declarationContext* /*ctx*/) override {}

     void exitOutput_declaration(Verilog2001Parser::Output_declarationContext* /*ctx*/) override {}

     void enterEvent_declaration(Verilog2001Parser::Event_declarationContext* /*ctx*/) override {}

     void exitEvent_declaration(Verilog2001Parser::Event_declarationContext* /*ctx*/) override {}

     void enterGenvar_declaration(Verilog2001Parser::Genvar_declarationContext* /*ctx*/) override {}

     void exitGenvar_declaration(Verilog2001Parser::Genvar_declarationContext* /*ctx*/) override {}

     void enterInteger_declaration(Verilog2001Parser::Integer_declarationContext* /*ctx*/) override {}

     void exitInteger_declaration(Verilog2001Parser::Integer_declarationContext* /*ctx*/) override {}

     void enterTime_declaration(Verilog2001Parser::Time_declarationContext* /*ctx*/) override {}

     void exitTime_declaration(Verilog2001Parser::Time_declarationContext* /*ctx*/) override {}

     void enterReal_declaration(Verilog2001Parser::Real_declarationContext* /*ctx*/) override {}

     void exitReal_declaration(Verilog2001Parser::Real_declarationContext* /*ctx*/) override {}

     void enterRealtime_declaration(Verilog2001Parser::Realtime_declarationContext* /*ctx*/) override {}

     void exitRealtime_declaration(Verilog2001Parser::Realtime_declarationContext* /*ctx*/) override {}

     void enterReg_declaration(Verilog2001Parser::Reg_declarationContext* /*ctx*/) override {}

     void exitReg_declaration(Verilog2001Parser::Reg_declarationContext* /*ctx*/) override {}

     void enterNet_declaration(Verilog2001Parser::Net_declarationContext* net/*ctx*/);

     void exitNet_declaration(Verilog2001Parser::Net_declarationContext* /*ctx*/) override {}

     void enterNet_type(Verilog2001Parser::Net_typeContext* /*ctx*/) override {}

     void exitNet_type(Verilog2001Parser::Net_typeContext* /*ctx*/) override {}

     void enterOutput_variable_type(Verilog2001Parser::Output_variable_typeContext* /*ctx*/) override {}

     void exitOutput_variable_type(Verilog2001Parser::Output_variable_typeContext* /*ctx*/) override {}

     void enterReal_type(Verilog2001Parser::Real_typeContext* /*ctx*/) override {}

     void exitReal_type(Verilog2001Parser::Real_typeContext* /*ctx*/) override {}

     void enterVariable_type(Verilog2001Parser::Variable_typeContext* /*ctx*/) override {}

     void exitVariable_type(Verilog2001Parser::Variable_typeContext* /*ctx*/) override {}

     void enterDrive_strength(Verilog2001Parser::Drive_strengthContext* /*ctx*/) override {}

     void exitDrive_strength(Verilog2001Parser::Drive_strengthContext* /*ctx*/) override {}

     void enterStrength0(Verilog2001Parser::Strength0Context* /*ctx*/) override {}

     void exitStrength0(Verilog2001Parser::Strength0Context* /*ctx*/) override {}

     void enterStrength1(Verilog2001Parser::Strength1Context* /*ctx*/) override {}

     void exitStrength1(Verilog2001Parser::Strength1Context* /*ctx*/) override {}

     void enterCharge_strength(Verilog2001Parser::Charge_strengthContext* /*ctx*/) override {}

     void exitCharge_strength(Verilog2001Parser::Charge_strengthContext* /*ctx*/) override {}

     void enterDelay3(Verilog2001Parser::Delay3Context* /*ctx*/) override {}

     void exitDelay3(Verilog2001Parser::Delay3Context* /*ctx*/) override {}

     void enterDelay2(Verilog2001Parser::Delay2Context* /*ctx*/) override {}

     void exitDelay2(Verilog2001Parser::Delay2Context* /*ctx*/) override {}

     void enterDelay_value(Verilog2001Parser::Delay_valueContext* /*ctx*/) override {}

     void exitDelay_value(Verilog2001Parser::Delay_valueContext* /*ctx*/) override {}

     void
    enterList_of_event_identifiers(Verilog2001Parser::List_of_event_identifiersContext* /*ctx*/) override {}

     void exitList_of_event_identifiers(Verilog2001Parser::List_of_event_identifiersContext* /*ctx*/) override {}

     void enterList_of_net_identifiers(Verilog2001Parser::List_of_net_identifiersContext* /*ctx*/) override {}

     void exitList_of_net_identifiers(Verilog2001Parser::List_of_net_identifiersContext* /*ctx*/) override {}

     void
    enterList_of_genvar_identifiers(Verilog2001Parser::List_of_genvar_identifiersContext* /*ctx*/) override {}

     void
    exitList_of_genvar_identifiers(Verilog2001Parser::List_of_genvar_identifiersContext* /*ctx*/) override {}

     void enterList_of_port_identifiers(Verilog2001Parser::List_of_port_identifiersContext* /*ctx*/) override {}

     void exitList_of_port_identifiers(Verilog2001Parser::List_of_port_identifiersContext* /*ctx*/) override {}

     void
    enterList_of_net_decl_assignments(Verilog2001Parser::List_of_net_decl_assignmentsContext* /*ctx*/) override {}

     void
    exitList_of_net_decl_assignments(Verilog2001Parser::List_of_net_decl_assignmentsContext* /*ctx*/) override {}

     void
    enterList_of_param_assignments(Verilog2001Parser::List_of_param_assignmentsContext* /*ctx*/) override {}

     void exitList_of_param_assignments(Verilog2001Parser::List_of_param_assignmentsContext* /*ctx*/) override {}

     void
    enterList_of_specparam_assignments(Verilog2001Parser::List_of_specparam_assignmentsContext* /*ctx*/) override {}

     void
    exitList_of_specparam_assignments(Verilog2001Parser::List_of_specparam_assignmentsContext* /*ctx*/) override {}

     void enterList_of_real_identifiers(Verilog2001Parser::List_of_real_identifiersContext* /*ctx*/) override {}

     void exitList_of_real_identifiers(Verilog2001Parser::List_of_real_identifiersContext* /*ctx*/) override {}

     void
    enterList_of_variable_identifiers(Verilog2001Parser::List_of_variable_identifiersContext* /*ctx*/) override {}

     void
    exitList_of_variable_identifiers(Verilog2001Parser::List_of_variable_identifiersContext* /*ctx*/) override {}

     void enterList_of_variable_port_identifiers(
            Verilog2001Parser::List_of_variable_port_identifiersContext* /*ctx*/) override {}

     void exitList_of_variable_port_identifiers(
            Verilog2001Parser::List_of_variable_port_identifiersContext* /*ctx*/) override {}

     void enterNet_decl_assignment(Verilog2001Parser::Net_decl_assignmentContext* /*ctx*/) override {}

     void exitNet_decl_assignment(Verilog2001Parser::Net_decl_assignmentContext* /*ctx*/) override {}

     void enterParam_assignment(Verilog2001Parser::Param_assignmentContext* /*ctx*/) override {}

     void exitParam_assignment(Verilog2001Parser::Param_assignmentContext* /*ctx*/) override {}

     void enterSpecparam_assignment(Verilog2001Parser::Specparam_assignmentContext* /*ctx*/) override {}

     void exitSpecparam_assignment(Verilog2001Parser::Specparam_assignmentContext* /*ctx*/) override {}

     void enterPulse_control_specparam(Verilog2001Parser::Pulse_control_specparamContext* /*ctx*/) override {}

     void exitPulse_control_specparam(Verilog2001Parser::Pulse_control_specparamContext* /*ctx*/) override {}

     void enterError_limit_value(Verilog2001Parser::Error_limit_valueContext* /*ctx*/) override {}

     void exitError_limit_value(Verilog2001Parser::Error_limit_valueContext* /*ctx*/) override {}

     void enterReject_limit_value(Verilog2001Parser::Reject_limit_valueContext* /*ctx*/) override {}

     void exitReject_limit_value(Verilog2001Parser::Reject_limit_valueContext* /*ctx*/) override {}

     void enterLimit_value(Verilog2001Parser::Limit_valueContext* /*ctx*/) override {}

     void exitLimit_value(Verilog2001Parser::Limit_valueContext* /*ctx*/) override {}

     void enterDimension(Verilog2001Parser::DimensionContext* /*ctx*/) override {}

     void exitDimension(Verilog2001Parser::DimensionContext* /*ctx*/) override {}

     void enterRange_(Verilog2001Parser::Range_Context* /*ctx*/) override {}

     void exitRange_(Verilog2001Parser::Range_Context* /*ctx*/) override {}

     void enterFunction_declaration(Verilog2001Parser::Function_declarationContext* /*ctx*/) override {}

     void exitFunction_declaration(Verilog2001Parser::Function_declarationContext* /*ctx*/) override {}

     void
    enterFunction_item_declaration(Verilog2001Parser::Function_item_declarationContext* /*ctx*/) override {}

     void exitFunction_item_declaration(Verilog2001Parser::Function_item_declarationContext* /*ctx*/) override {}

     void enterFunction_port_list(Verilog2001Parser::Function_port_listContext* /*ctx*/) override {}

     void exitFunction_port_list(Verilog2001Parser::Function_port_listContext* /*ctx*/) override {}

     void enterFunction_port(Verilog2001Parser::Function_portContext* /*ctx*/) override {}

     void exitFunction_port(Verilog2001Parser::Function_portContext* /*ctx*/) override {}

     void enterRange_or_type(Verilog2001Parser::Range_or_typeContext* /*ctx*/) override {}

     void exitRange_or_type(Verilog2001Parser::Range_or_typeContext* /*ctx*/) override {}

     void enterTask_declaration(Verilog2001Parser::Task_declarationContext* /*ctx*/) override {}

     void exitTask_declaration(Verilog2001Parser::Task_declarationContext* /*ctx*/) override {}

     void enterTask_item_declaration(Verilog2001Parser::Task_item_declarationContext* /*ctx*/) override {}

     void exitTask_item_declaration(Verilog2001Parser::Task_item_declarationContext* /*ctx*/) override {}

     void enterTask_port_list(Verilog2001Parser::Task_port_listContext* /*ctx*/) override {}

     void exitTask_port_list(Verilog2001Parser::Task_port_listContext* /*ctx*/) override {}

     void enterTask_port_item(Verilog2001Parser::Task_port_itemContext* /*ctx*/) override {}

     void exitTask_port_item(Verilog2001Parser::Task_port_itemContext* /*ctx*/) override {}

     void enterTf_decl_header(Verilog2001Parser::Tf_decl_headerContext* /*ctx*/) override {}

     void exitTf_decl_header(Verilog2001Parser::Tf_decl_headerContext* /*ctx*/) override {}

     void enterTf_declaration(Verilog2001Parser::Tf_declarationContext* /*ctx*/) override {}

     void exitTf_declaration(Verilog2001Parser::Tf_declarationContext* /*ctx*/) override {}

     void enterTask_port_type(Verilog2001Parser::Task_port_typeContext* /*ctx*/) override {}

     void exitTask_port_type(Verilog2001Parser::Task_port_typeContext* /*ctx*/) override {}

     void enterBlock_item_declaration(Verilog2001Parser::Block_item_declarationContext* /*ctx*/) override {}

     void exitBlock_item_declaration(Verilog2001Parser::Block_item_declarationContext* /*ctx*/) override {}

     void enterBlock_reg_declaration(Verilog2001Parser::Block_reg_declarationContext* /*ctx*/) override {}

     void exitBlock_reg_declaration(Verilog2001Parser::Block_reg_declarationContext* /*ctx*/) override {}

     void enterList_of_block_variable_identifiers(
            Verilog2001Parser::List_of_block_variable_identifiersContext* /*ctx*/) override {}

     void exitList_of_block_variable_identifiers(
            Verilog2001Parser::List_of_block_variable_identifiersContext* /*ctx*/) override {}

     void enterBlock_variable_type(Verilog2001Parser::Block_variable_typeContext* /*ctx*/) override {}

     void exitBlock_variable_type(Verilog2001Parser::Block_variable_typeContext* /*ctx*/) override {}

     void enterGate_instantiation(Verilog2001Parser::Gate_instantiationContext* gate/*ctx*/);

     void exitGate_instantiation(Verilog2001Parser::Gate_instantiationContext* /*ctx*/) override {}

     void enterCmos_switch_instance(Verilog2001Parser::Cmos_switch_instanceContext* /*ctx*/) override {}

     void exitCmos_switch_instance(Verilog2001Parser::Cmos_switch_instanceContext* /*ctx*/) override {}

     void enterEnable_gate_instance(Verilog2001Parser::Enable_gate_instanceContext* /*ctx*/) override {}

     void exitEnable_gate_instance(Verilog2001Parser::Enable_gate_instanceContext* /*ctx*/) override {}

     void enterMos_switch_instance(Verilog2001Parser::Mos_switch_instanceContext* /*ctx*/) override {}

     void exitMos_switch_instance(Verilog2001Parser::Mos_switch_instanceContext* /*ctx*/) override {}

     void enterN_input_gate_instance(Verilog2001Parser::N_input_gate_instanceContext* gateInst) override {

    }

     void exitN_input_gate_instance(Verilog2001Parser::N_input_gate_instanceContext* /*ctx*/) override {}

     void enterN_output_gate_instance(Verilog2001Parser::N_output_gate_instanceContext* /*ctx*/) override {}

     void exitN_output_gate_instance(Verilog2001Parser::N_output_gate_instanceContext* /*ctx*/) override {}

     void enterPass_switch_instance(Verilog2001Parser::Pass_switch_instanceContext* /*ctx*/) override {}

     void exitPass_switch_instance(Verilog2001Parser::Pass_switch_instanceContext* /*ctx*/) override {}

     void
    enterPass_enable_switch_instance(Verilog2001Parser::Pass_enable_switch_instanceContext* /*ctx*/) override {}

     void
    exitPass_enable_switch_instance(Verilog2001Parser::Pass_enable_switch_instanceContext* /*ctx*/) override {}

     void enterPull_gate_instance(Verilog2001Parser::Pull_gate_instanceContext* /*ctx*/) override {}

     void exitPull_gate_instance(Verilog2001Parser::Pull_gate_instanceContext* /*ctx*/) override {}

     void enterName_of_gate_instance(Verilog2001Parser::Name_of_gate_instanceContext* /*ctx*/) override {}

     void exitName_of_gate_instance(Verilog2001Parser::Name_of_gate_instanceContext* /*ctx*/) override {}

     void enterPulldown_strength(Verilog2001Parser::Pulldown_strengthContext* /*ctx*/) override {}

     void exitPulldown_strength(Verilog2001Parser::Pulldown_strengthContext* /*ctx*/) override {}

     void enterPullup_strength(Verilog2001Parser::Pullup_strengthContext* /*ctx*/) override {}

     void exitPullup_strength(Verilog2001Parser::Pullup_strengthContext* /*ctx*/) override {}

     void enterEnable_terminal(Verilog2001Parser::Enable_terminalContext* /*ctx*/) override {}

     void exitEnable_terminal(Verilog2001Parser::Enable_terminalContext* /*ctx*/) override {}

     void enterNcontrol_terminal(Verilog2001Parser::Ncontrol_terminalContext* /*ctx*/) override {}

     void exitNcontrol_terminal(Verilog2001Parser::Ncontrol_terminalContext* /*ctx*/) override {}

     void enterPcontrol_terminal(Verilog2001Parser::Pcontrol_terminalContext* /*ctx*/) override {}

     void exitPcontrol_terminal(Verilog2001Parser::Pcontrol_terminalContext* /*ctx*/) override {}

     void enterInput_terminal(Verilog2001Parser::Input_terminalContext* /*ctx*/) override {}

     void exitInput_terminal(Verilog2001Parser::Input_terminalContext* /*ctx*/) override {}

     void enterInout_terminal(Verilog2001Parser::Inout_terminalContext* /*ctx*/) override {}

     void exitInout_terminal(Verilog2001Parser::Inout_terminalContext* /*ctx*/) override {}

     void enterOutput_terminal(Verilog2001Parser::Output_terminalContext* /*ctx*/) override {}

     void exitOutput_terminal(Verilog2001Parser::Output_terminalContext* /*ctx*/) override {}

     void enterCmos_switchtype(Verilog2001Parser::Cmos_switchtypeContext* /*ctx*/) override {}

     void exitCmos_switchtype(Verilog2001Parser::Cmos_switchtypeContext* /*ctx*/) override {}

     void enterEnable_gatetype(Verilog2001Parser::Enable_gatetypeContext* /*ctx*/) override {}

     void exitEnable_gatetype(Verilog2001Parser::Enable_gatetypeContext* /*ctx*/) override {}

     void enterMos_switchtype(Verilog2001Parser::Mos_switchtypeContext* /*ctx*/) override {}

     void exitMos_switchtype(Verilog2001Parser::Mos_switchtypeContext* /*ctx*/) override {}

     void enterN_input_gatetype(Verilog2001Parser::N_input_gatetypeContext* /*ctx*/) override {}

     void exitN_input_gatetype(Verilog2001Parser::N_input_gatetypeContext* /*ctx*/) override {}

     void enterN_output_gatetype(Verilog2001Parser::N_output_gatetypeContext* /*ctx*/) override {}

     void exitN_output_gatetype(Verilog2001Parser::N_output_gatetypeContext* /*ctx*/) override {}

     void enterPass_en_switchtype(Verilog2001Parser::Pass_en_switchtypeContext* /*ctx*/) override {}

     void exitPass_en_switchtype(Verilog2001Parser::Pass_en_switchtypeContext* /*ctx*/) override {}

     void enterPass_switchtype(Verilog2001Parser::Pass_switchtypeContext* /*ctx*/) override {}

     void exitPass_switchtype(Verilog2001Parser::Pass_switchtypeContext* /*ctx*/) override {}

     void enterModule_instantiation(Verilog2001Parser::Module_instantiationContext* inst/*ctx*/) override;

     void exitModule_instantiation(Verilog2001Parser::Module_instantiationContext* /*ctx*/) override {}

     void
    enterParameter_value_assignment(Verilog2001Parser::Parameter_value_assignmentContext* /*ctx*/) override {}

     void
    exitParameter_value_assignment(Verilog2001Parser::Parameter_value_assignmentContext* /*ctx*/) override {}

     void
    enterList_of_parameter_assignments(Verilog2001Parser::List_of_parameter_assignmentsContext* /*ctx*/) override {}

     void
    exitList_of_parameter_assignments(Verilog2001Parser::List_of_parameter_assignmentsContext* /*ctx*/) override {}

     void
    enterOrdered_parameter_assignment(Verilog2001Parser::Ordered_parameter_assignmentContext* /*ctx*/) override {}

     void
    exitOrdered_parameter_assignment(Verilog2001Parser::Ordered_parameter_assignmentContext* /*ctx*/) override {}

     void
    enterNamed_parameter_assignment(Verilog2001Parser::Named_parameter_assignmentContext* /*ctx*/) override {}

     void
    exitNamed_parameter_assignment(Verilog2001Parser::Named_parameter_assignmentContext* /*ctx*/) override {}

     void enterModule_instance(Verilog2001Parser::Module_instanceContext* inst) override {
    }

     void exitModule_instance(Verilog2001Parser::Module_instanceContext* /*ctx*/) override {}

     void enterName_of_instance(Verilog2001Parser::Name_of_instanceContext* /*ctx*/) override {}

     void exitName_of_instance(Verilog2001Parser::Name_of_instanceContext* /*ctx*/) override {}

     void enterList_of_port_connections(Verilog2001Parser::List_of_port_connectionsContext* /*ctx*/) override {}

     void exitList_of_port_connections(Verilog2001Parser::List_of_port_connectionsContext* /*ctx*/) override {}

     void enterOrdered_port_connection(Verilog2001Parser::Ordered_port_connectionContext* /*ctx*/) override {}

     void exitOrdered_port_connection(Verilog2001Parser::Ordered_port_connectionContext* /*ctx*/) override {}

    void enterNamed_port_connection(Verilog2001Parser::Named_port_connectionContext* /*ctx*/) override {}

    void exitNamed_port_connection(Verilog2001Parser::Named_port_connectionContext* /*ctx*/) override {}

     void enterGenerated_instantiation(Verilog2001Parser::Generated_instantiationContext* /*ctx*/) override {}

     void exitGenerated_instantiation(Verilog2001Parser::Generated_instantiationContext* /*ctx*/) override {}

     void enterGenerate_item_or_null(Verilog2001Parser::Generate_item_or_nullContext* /*ctx*/) override {}

     void exitGenerate_item_or_null(Verilog2001Parser::Generate_item_or_nullContext* /*ctx*/) override {}

     void enterGenerate_item(Verilog2001Parser::Generate_itemContext* /*ctx*/) override {}

     void exitGenerate_item(Verilog2001Parser::Generate_itemContext* /*ctx*/) override {}

     void
    enterGenerate_conditional_statement(Verilog2001Parser::Generate_conditional_statementContext* /*ctx*/) override {}

     void
    exitGenerate_conditional_statement(Verilog2001Parser::Generate_conditional_statementContext* /*ctx*/) override {}

     void enterGenerate_case_statement(Verilog2001Parser::Generate_case_statementContext* /*ctx*/) override {}

     void exitGenerate_case_statement(Verilog2001Parser::Generate_case_statementContext* /*ctx*/) override {}

     void enterGenvar_case_item(Verilog2001Parser::Genvar_case_itemContext* /*ctx*/) override {}

     void exitGenvar_case_item(Verilog2001Parser::Genvar_case_itemContext* /*ctx*/) override {}

     void enterGenerate_loop_statement(Verilog2001Parser::Generate_loop_statementContext* /*ctx*/) override {}

     void exitGenerate_loop_statement(Verilog2001Parser::Generate_loop_statementContext* /*ctx*/) override {}

     void enterGenvar_assignment(Verilog2001Parser::Genvar_assignmentContext* /*ctx*/) override {}

     void exitGenvar_assignment(Verilog2001Parser::Genvar_assignmentContext* /*ctx*/) override {}

     void enterGenerate_block(Verilog2001Parser::Generate_blockContext* /*ctx*/) override {}

     void exitGenerate_block(Verilog2001Parser::Generate_blockContext* /*ctx*/) override {}

     void enterContinuous_assign(Verilog2001Parser::Continuous_assignContext* /*ctx*/) override;

     void exitContinuous_assign(Verilog2001Parser::Continuous_assignContext* /*ctx*/) override {}

     void enterList_of_net_assignments(Verilog2001Parser::List_of_net_assignmentsContext* /*ctx*/) override {}

     void exitList_of_net_assignments(Verilog2001Parser::List_of_net_assignmentsContext* /*ctx*/) override {}

     void enterNet_assignment(Verilog2001Parser::Net_assignmentContext* /*ctx*/) override {}

     void exitNet_assignment(Verilog2001Parser::Net_assignmentContext* /*ctx*/) override {}

     void enterInitial_construct(Verilog2001Parser::Initial_constructContext* /*ctx*/) override {}

     void exitInitial_construct(Verilog2001Parser::Initial_constructContext* /*ctx*/) override {}

     void enterAlways_construct(Verilog2001Parser::Always_constructContext* /*ctx*/) override {}

     void exitAlways_construct(Verilog2001Parser::Always_constructContext* /*ctx*/) override {}

     void enterBlocking_assignment(Verilog2001Parser::Blocking_assignmentContext* /*ctx*/) override {}

     void exitBlocking_assignment(Verilog2001Parser::Blocking_assignmentContext* /*ctx*/) override {}

     void enterNonblocking_assignment(Verilog2001Parser::Nonblocking_assignmentContext* /*ctx*/) override {}

     void exitNonblocking_assignment(Verilog2001Parser::Nonblocking_assignmentContext* /*ctx*/) override {}

     void enterProcedural_continuous_assignments(
            Verilog2001Parser::Procedural_continuous_assignmentsContext* /*ctx*/) override {}

     void exitProcedural_continuous_assignments(
            Verilog2001Parser::Procedural_continuous_assignmentsContext* /*ctx*/) override {}

     void
    enterFunction_blocking_assignment(Verilog2001Parser::Function_blocking_assignmentContext* /*ctx*/) override {}

     void
    exitFunction_blocking_assignment(Verilog2001Parser::Function_blocking_assignmentContext* /*ctx*/) override {}

     void
    enterFunction_statement_or_null(Verilog2001Parser::Function_statement_or_nullContext* /*ctx*/) override {}

     void
    exitFunction_statement_or_null(Verilog2001Parser::Function_statement_or_nullContext* /*ctx*/) override {}

     void enterFunction_seq_block(Verilog2001Parser::Function_seq_blockContext* /*ctx*/) override {}

     void exitFunction_seq_block(Verilog2001Parser::Function_seq_blockContext* /*ctx*/) override {}

     void enterVariable_assignment(Verilog2001Parser::Variable_assignmentContext* /*ctx*/) override {}

     void exitVariable_assignment(Verilog2001Parser::Variable_assignmentContext* /*ctx*/) override {}

     void enterPar_block(Verilog2001Parser::Par_blockContext* /*ctx*/) override {}

     void exitPar_block(Verilog2001Parser::Par_blockContext* /*ctx*/) override {}

     void enterSeq_block(Verilog2001Parser::Seq_blockContext* /*ctx*/) override {}

     void exitSeq_block(Verilog2001Parser::Seq_blockContext* /*ctx*/) override {}

     void enterStatement(Verilog2001Parser::StatementContext* /*ctx*/) override {}

     void exitStatement(Verilog2001Parser::StatementContext* /*ctx*/) override {}

     void enterStatement_or_null(Verilog2001Parser::Statement_or_nullContext* /*ctx*/) override {}

     void exitStatement_or_null(Verilog2001Parser::Statement_or_nullContext* /*ctx*/) override {}

     void enterFunction_statement(Verilog2001Parser::Function_statementContext* /*ctx*/) override {}

     void exitFunction_statement(Verilog2001Parser::Function_statementContext* /*ctx*/) override {}

     void enterDelay_or_event_control(Verilog2001Parser::Delay_or_event_controlContext* /*ctx*/) override {}

     void exitDelay_or_event_control(Verilog2001Parser::Delay_or_event_controlContext* /*ctx*/) override {}

     void enterDelay_control(Verilog2001Parser::Delay_controlContext* /*ctx*/) override {}

     void exitDelay_control(Verilog2001Parser::Delay_controlContext* /*ctx*/) override {}

     void enterDisable_statement(Verilog2001Parser::Disable_statementContext* /*ctx*/) override {}

     void exitDisable_statement(Verilog2001Parser::Disable_statementContext* /*ctx*/) override {}

     void enterEvent_control(Verilog2001Parser::Event_controlContext* /*ctx*/) override {}

     void exitEvent_control(Verilog2001Parser::Event_controlContext* /*ctx*/) override {}

     void enterEvent_trigger(Verilog2001Parser::Event_triggerContext* /*ctx*/) override {}

     void exitEvent_trigger(Verilog2001Parser::Event_triggerContext* /*ctx*/) override {}

     void enterEvent_expression(Verilog2001Parser::Event_expressionContext* /*ctx*/) override {}

     void exitEvent_expression(Verilog2001Parser::Event_expressionContext* /*ctx*/) override {}

     void enterEvent_primary(Verilog2001Parser::Event_primaryContext* /*ctx*/) override {}

     void exitEvent_primary(Verilog2001Parser::Event_primaryContext* /*ctx*/) override {}

     void enterProcedural_timing_control_statement(
            Verilog2001Parser::Procedural_timing_control_statementContext* /*ctx*/) override {}

     void exitProcedural_timing_control_statement(
            Verilog2001Parser::Procedural_timing_control_statementContext* /*ctx*/) override {}

     void enterWait_statement(Verilog2001Parser::Wait_statementContext* /*ctx*/) override {}

     void exitWait_statement(Verilog2001Parser::Wait_statementContext* /*ctx*/) override {}

     void enterConditional_statement(Verilog2001Parser::Conditional_statementContext* /*ctx*/) override {}

     void exitConditional_statement(Verilog2001Parser::Conditional_statementContext* /*ctx*/) override {}

     void enterIf_else_if_statement(Verilog2001Parser::If_else_if_statementContext* /*ctx*/) override {}

     void exitIf_else_if_statement(Verilog2001Parser::If_else_if_statementContext* /*ctx*/) override {}

     void
    enterFunction_conditional_statement(Verilog2001Parser::Function_conditional_statementContext* /*ctx*/) override {}

     void
    exitFunction_conditional_statement(Verilog2001Parser::Function_conditional_statementContext* /*ctx*/) override {}

     void
    enterFunction_if_else_if_statement(Verilog2001Parser::Function_if_else_if_statementContext* /*ctx*/) override {}

     void
    exitFunction_if_else_if_statement(Verilog2001Parser::Function_if_else_if_statementContext* /*ctx*/) override {}

     void enterCase_statement(Verilog2001Parser::Case_statementContext* /*ctx*/) override {}

     void exitCase_statement(Verilog2001Parser::Case_statementContext* /*ctx*/) override {}

     void enterCase_item(Verilog2001Parser::Case_itemContext* /*ctx*/) override {}

     void exitCase_item(Verilog2001Parser::Case_itemContext* /*ctx*/) override {}

     void enterFunction_case_statement(Verilog2001Parser::Function_case_statementContext* /*ctx*/) override {}

     void exitFunction_case_statement(Verilog2001Parser::Function_case_statementContext* /*ctx*/) override {}

     void enterFunction_case_item(Verilog2001Parser::Function_case_itemContext* /*ctx*/) override {}

     void exitFunction_case_item(Verilog2001Parser::Function_case_itemContext* /*ctx*/) override {}

     void enterFunction_loop_statement(Verilog2001Parser::Function_loop_statementContext* /*ctx*/) override {}

     void exitFunction_loop_statement(Verilog2001Parser::Function_loop_statementContext* /*ctx*/) override {}

     void enterLoop_statement(Verilog2001Parser::Loop_statementContext* /*ctx*/) override {}

     void exitLoop_statement(Verilog2001Parser::Loop_statementContext* /*ctx*/) override {}

     void enterSystem_task_enable(Verilog2001Parser::System_task_enableContext* /*ctx*/) override {}

     void exitSystem_task_enable(Verilog2001Parser::System_task_enableContext* /*ctx*/) override {}

     void enterTask_enable(Verilog2001Parser::Task_enableContext* /*ctx*/) override {}

     void exitTask_enable(Verilog2001Parser::Task_enableContext* /*ctx*/) override {}

     void enterSpecify_block(Verilog2001Parser::Specify_blockContext* /*ctx*/) override {}

     void exitSpecify_block(Verilog2001Parser::Specify_blockContext* /*ctx*/) override {}

     void enterSpecify_item(Verilog2001Parser::Specify_itemContext* /*ctx*/) override {}

     void exitSpecify_item(Verilog2001Parser::Specify_itemContext* /*ctx*/) override {}

     void enterPulsestyle_declaration(Verilog2001Parser::Pulsestyle_declarationContext* /*ctx*/) override {}

     void exitPulsestyle_declaration(Verilog2001Parser::Pulsestyle_declarationContext* /*ctx*/) override {}

     void
    enterShowcancelled_declaration(Verilog2001Parser::Showcancelled_declarationContext* /*ctx*/) override {}

     void exitShowcancelled_declaration(Verilog2001Parser::Showcancelled_declarationContext* /*ctx*/) override {}

     void enterPath_declaration(Verilog2001Parser::Path_declarationContext* /*ctx*/) override {}

     void exitPath_declaration(Verilog2001Parser::Path_declarationContext* /*ctx*/) override {}

     void enterSimple_path_declaration(Verilog2001Parser::Simple_path_declarationContext* /*ctx*/) override {}

     void exitSimple_path_declaration(Verilog2001Parser::Simple_path_declarationContext* /*ctx*/) override {}

     void
    enterParallel_path_description(Verilog2001Parser::Parallel_path_descriptionContext* /*ctx*/) override {}

     void exitParallel_path_description(Verilog2001Parser::Parallel_path_descriptionContext* /*ctx*/) override {}

     void enterFull_path_description(Verilog2001Parser::Full_path_descriptionContext* /*ctx*/) override {}

     void exitFull_path_description(Verilog2001Parser::Full_path_descriptionContext* /*ctx*/) override {}

     void enterList_of_path_inputs(Verilog2001Parser::List_of_path_inputsContext* /*ctx*/) override {}

     void exitList_of_path_inputs(Verilog2001Parser::List_of_path_inputsContext* /*ctx*/) override {}

     void enterList_of_path_outputs(Verilog2001Parser::List_of_path_outputsContext* /*ctx*/) override {}

     void exitList_of_path_outputs(Verilog2001Parser::List_of_path_outputsContext* /*ctx*/) override {}

     void enterSpecify_input_terminal_descriptor(
            Verilog2001Parser::Specify_input_terminal_descriptorContext* /*ctx*/) override {}

     void exitSpecify_input_terminal_descriptor(
            Verilog2001Parser::Specify_input_terminal_descriptorContext* /*ctx*/) override {}

     void enterSpecify_output_terminal_descriptor(
            Verilog2001Parser::Specify_output_terminal_descriptorContext* /*ctx*/) override {}

     void exitSpecify_output_terminal_descriptor(
            Verilog2001Parser::Specify_output_terminal_descriptorContext* /*ctx*/) override {}

     void enterInput_identifier(Verilog2001Parser::Input_identifierContext* /*ctx*/) override {}

     void exitInput_identifier(Verilog2001Parser::Input_identifierContext* /*ctx*/) override {}

     void enterOutput_identifier(Verilog2001Parser::Output_identifierContext* /*ctx*/) override {}

     void exitOutput_identifier(Verilog2001Parser::Output_identifierContext* /*ctx*/) override {}

     void enterPath_delay_value(Verilog2001Parser::Path_delay_valueContext* /*ctx*/) override {}

     void exitPath_delay_value(Verilog2001Parser::Path_delay_valueContext* /*ctx*/) override {}

     void
    enterList_of_path_delay_expressions(Verilog2001Parser::List_of_path_delay_expressionsContext* /*ctx*/) override {}

     void
    exitList_of_path_delay_expressions(Verilog2001Parser::List_of_path_delay_expressionsContext* /*ctx*/) override {}

     void enterT_path_delay_expression(Verilog2001Parser::T_path_delay_expressionContext* /*ctx*/) override {}

     void exitT_path_delay_expression(Verilog2001Parser::T_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTrise_path_delay_expression(Verilog2001Parser::Trise_path_delay_expressionContext* /*ctx*/) override {}

     void
    exitTrise_path_delay_expression(Verilog2001Parser::Trise_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTfall_path_delay_expression(Verilog2001Parser::Tfall_path_delay_expressionContext* /*ctx*/) override {}

     void
    exitTfall_path_delay_expression(Verilog2001Parser::Tfall_path_delay_expressionContext* /*ctx*/) override {}

     void enterTz_path_delay_expression(Verilog2001Parser::Tz_path_delay_expressionContext* /*ctx*/) override {}

     void exitTz_path_delay_expression(Verilog2001Parser::Tz_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT01_path_delay_expression(Verilog2001Parser::T01_path_delay_expressionContext* /*ctx*/) override {}

     void exitT01_path_delay_expression(Verilog2001Parser::T01_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT10_path_delay_expression(Verilog2001Parser::T10_path_delay_expressionContext* /*ctx*/) override {}

     void exitT10_path_delay_expression(Verilog2001Parser::T10_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT0z_path_delay_expression(Verilog2001Parser::T0z_path_delay_expressionContext* /*ctx*/) override {}

     void exitT0z_path_delay_expression(Verilog2001Parser::T0z_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTz1_path_delay_expression(Verilog2001Parser::Tz1_path_delay_expressionContext* /*ctx*/) override {}

     void exitTz1_path_delay_expression(Verilog2001Parser::Tz1_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT1z_path_delay_expression(Verilog2001Parser::T1z_path_delay_expressionContext* /*ctx*/) override {}

     void exitT1z_path_delay_expression(Verilog2001Parser::T1z_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTz0_path_delay_expression(Verilog2001Parser::Tz0_path_delay_expressionContext* /*ctx*/) override {}

     void exitTz0_path_delay_expression(Verilog2001Parser::Tz0_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT0x_path_delay_expression(Verilog2001Parser::T0x_path_delay_expressionContext* /*ctx*/) override {}

     void exitT0x_path_delay_expression(Verilog2001Parser::T0x_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTx1_path_delay_expression(Verilog2001Parser::Tx1_path_delay_expressionContext* /*ctx*/) override {}

     void exitTx1_path_delay_expression(Verilog2001Parser::Tx1_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterT1x_path_delay_expression(Verilog2001Parser::T1x_path_delay_expressionContext* /*ctx*/) override {}

     void exitT1x_path_delay_expression(Verilog2001Parser::T1x_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTx0_path_delay_expression(Verilog2001Parser::Tx0_path_delay_expressionContext* /*ctx*/) override {}

     void exitTx0_path_delay_expression(Verilog2001Parser::Tx0_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTxz_path_delay_expression(Verilog2001Parser::Txz_path_delay_expressionContext* /*ctx*/) override {}

     void exitTxz_path_delay_expression(Verilog2001Parser::Txz_path_delay_expressionContext* /*ctx*/) override {}

     void
    enterTzx_path_delay_expression(Verilog2001Parser::Tzx_path_delay_expressionContext* /*ctx*/) override {}

     void exitTzx_path_delay_expression(Verilog2001Parser::Tzx_path_delay_expressionContext* /*ctx*/) override {}

     void enterPath_delay_expression(Verilog2001Parser::Path_delay_expressionContext* /*ctx*/) override {}

     void exitPath_delay_expression(Verilog2001Parser::Path_delay_expressionContext* /*ctx*/) override {}

     void
    enterEdge_sensitive_path_declaration(Verilog2001Parser::Edge_sensitive_path_declarationContext* /*ctx*/) override {}

     void
    exitEdge_sensitive_path_declaration(Verilog2001Parser::Edge_sensitive_path_declarationContext* /*ctx*/) override {}

     void enterParallel_edge_sensitive_path_description(
            Verilog2001Parser::Parallel_edge_sensitive_path_descriptionContext* /*ctx*/) override {}

     void exitParallel_edge_sensitive_path_description(
            Verilog2001Parser::Parallel_edge_sensitive_path_descriptionContext* /*ctx*/) override {}

     void enterFull_edge_sensitive_path_description(
            Verilog2001Parser::Full_edge_sensitive_path_descriptionContext* /*ctx*/) override {}

     void exitFull_edge_sensitive_path_description(
            Verilog2001Parser::Full_edge_sensitive_path_descriptionContext* /*ctx*/) override {}

     void enterData_source_expression(Verilog2001Parser::Data_source_expressionContext* /*ctx*/) override {}

     void exitData_source_expression(Verilog2001Parser::Data_source_expressionContext* /*ctx*/) override {}

     void enterEdge_identifier(Verilog2001Parser::Edge_identifierContext* /*ctx*/) override {}

     void exitEdge_identifier(Verilog2001Parser::Edge_identifierContext* /*ctx*/) override {}

     void enterState_dependent_path_declaration(
            Verilog2001Parser::State_dependent_path_declarationContext* /*ctx*/) override {}

     void exitState_dependent_path_declaration(
            Verilog2001Parser::State_dependent_path_declarationContext* /*ctx*/) override {}

     void enterPolarity_operator(Verilog2001Parser::Polarity_operatorContext* /*ctx*/) override {}

     void exitPolarity_operator(Verilog2001Parser::Polarity_operatorContext* /*ctx*/) override {}

     void enterChecktime_condition(Verilog2001Parser::Checktime_conditionContext* /*ctx*/) override {}

     void exitChecktime_condition(Verilog2001Parser::Checktime_conditionContext* /*ctx*/) override {}

     void enterDelayed_data(Verilog2001Parser::Delayed_dataContext* /*ctx*/) override {}

     void exitDelayed_data(Verilog2001Parser::Delayed_dataContext* /*ctx*/) override {}

     void enterDelayed_reference(Verilog2001Parser::Delayed_referenceContext* /*ctx*/) override {}

     void exitDelayed_reference(Verilog2001Parser::Delayed_referenceContext* /*ctx*/) override {}

     void enterEnd_edge_offset(Verilog2001Parser::End_edge_offsetContext* /*ctx*/) override {}

     void exitEnd_edge_offset(Verilog2001Parser::End_edge_offsetContext* /*ctx*/) override {}

     void enterEvent_based_flag(Verilog2001Parser::Event_based_flagContext* /*ctx*/) override {}

     void exitEvent_based_flag(Verilog2001Parser::Event_based_flagContext* /*ctx*/) override {}

     void enterNotify_reg(Verilog2001Parser::Notify_regContext* /*ctx*/) override {}

     void exitNotify_reg(Verilog2001Parser::Notify_regContext* /*ctx*/) override {}

     void enterRemain_active_flag(Verilog2001Parser::Remain_active_flagContext* /*ctx*/) override {}

     void exitRemain_active_flag(Verilog2001Parser::Remain_active_flagContext* /*ctx*/) override {}

     void enterStamptime_condition(Verilog2001Parser::Stamptime_conditionContext* /*ctx*/) override {}

     void exitStamptime_condition(Verilog2001Parser::Stamptime_conditionContext* /*ctx*/) override {}

     void enterStart_edge_offset(Verilog2001Parser::Start_edge_offsetContext* /*ctx*/) override {}

     void exitStart_edge_offset(Verilog2001Parser::Start_edge_offsetContext* /*ctx*/) override {}

     void enterThreshold(Verilog2001Parser::ThresholdContext* /*ctx*/) override {}

     void exitThreshold(Verilog2001Parser::ThresholdContext* /*ctx*/) override {}

     void enterTiming_check_limit(Verilog2001Parser::Timing_check_limitContext* /*ctx*/) override {}

     void exitTiming_check_limit(Verilog2001Parser::Timing_check_limitContext* /*ctx*/) override {}

     void enterConcatenation(Verilog2001Parser::ConcatenationContext* /*ctx*/) override {}

     void exitConcatenation(Verilog2001Parser::ConcatenationContext* /*ctx*/) override {}

     void enterConstant_concatenation(Verilog2001Parser::Constant_concatenationContext* /*ctx*/) override {}

     void exitConstant_concatenation(Verilog2001Parser::Constant_concatenationContext* /*ctx*/) override {}

     void
    enterConstant_multiple_concatenation(Verilog2001Parser::Constant_multiple_concatenationContext* /*ctx*/) override {}

     void
    exitConstant_multiple_concatenation(Verilog2001Parser::Constant_multiple_concatenationContext* /*ctx*/) override {}

     void
    enterModule_path_concatenation(Verilog2001Parser::Module_path_concatenationContext* /*ctx*/) override {}

     void exitModule_path_concatenation(Verilog2001Parser::Module_path_concatenationContext* /*ctx*/) override {}

     void enterModule_path_multiple_concatenation(
            Verilog2001Parser::Module_path_multiple_concatenationContext* /*ctx*/) override {}

     void exitModule_path_multiple_concatenation(
            Verilog2001Parser::Module_path_multiple_concatenationContext* /*ctx*/) override {}

     void enterMultiple_concatenation(Verilog2001Parser::Multiple_concatenationContext* /*ctx*/) override {}

     void exitMultiple_concatenation(Verilog2001Parser::Multiple_concatenationContext* /*ctx*/) override {}

     void enterNet_concatenation(Verilog2001Parser::Net_concatenationContext* /*ctx*/) override {}

     void exitNet_concatenation(Verilog2001Parser::Net_concatenationContext* /*ctx*/) override {}

     void enterNet_concatenation_value(Verilog2001Parser::Net_concatenation_valueContext* /*ctx*/) override {}

     void exitNet_concatenation_value(Verilog2001Parser::Net_concatenation_valueContext* /*ctx*/) override {}

     void enterVariable_concatenation(Verilog2001Parser::Variable_concatenationContext* /*ctx*/) override {}

     void exitVariable_concatenation(Verilog2001Parser::Variable_concatenationContext* /*ctx*/) override {}

     void
    enterVariable_concatenation_value(Verilog2001Parser::Variable_concatenation_valueContext* /*ctx*/) override {}

     void
    exitVariable_concatenation_value(Verilog2001Parser::Variable_concatenation_valueContext* /*ctx*/) override {}

     void enterConstant_function_call(Verilog2001Parser::Constant_function_callContext* /*ctx*/) override {}

     void exitConstant_function_call(Verilog2001Parser::Constant_function_callContext* /*ctx*/) override {}

     void enterFunction_call(Verilog2001Parser::Function_callContext* /*ctx*/) override {}

     void exitFunction_call(Verilog2001Parser::Function_callContext* /*ctx*/) override {}

     void enterSystem_function_call(Verilog2001Parser::System_function_callContext* /*ctx*/) override {}

     void exitSystem_function_call(Verilog2001Parser::System_function_callContext* /*ctx*/) override {}

     void enterGenvar_function_call(Verilog2001Parser::Genvar_function_callContext* /*ctx*/) override {}

     void exitGenvar_function_call(Verilog2001Parser::Genvar_function_callContext* /*ctx*/) override {}

     void enterBase_expression(Verilog2001Parser::Base_expressionContext* /*ctx*/) override {}

     void exitBase_expression(Verilog2001Parser::Base_expressionContext* /*ctx*/) override {}

     void enterConstant_base_expression(Verilog2001Parser::Constant_base_expressionContext* /*ctx*/) override {}

     void exitConstant_base_expression(Verilog2001Parser::Constant_base_expressionContext* /*ctx*/) override {}

     void enterConstant_expression(Verilog2001Parser::Constant_expressionContext* /*ctx*/) override {}

     void exitConstant_expression(Verilog2001Parser::Constant_expressionContext* /*ctx*/) override {}

     void
    enterConstant_mintypmax_expression(Verilog2001Parser::Constant_mintypmax_expressionContext* /*ctx*/) override {}

     void
    exitConstant_mintypmax_expression(Verilog2001Parser::Constant_mintypmax_expressionContext* /*ctx*/) override {}

     void
    enterConstant_range_expression(Verilog2001Parser::Constant_range_expressionContext* /*ctx*/) override {}

     void exitConstant_range_expression(Verilog2001Parser::Constant_range_expressionContext* /*ctx*/) override {}

     void
    enterDimension_constant_expression(Verilog2001Parser::Dimension_constant_expressionContext* /*ctx*/) override {}

     void
    exitDimension_constant_expression(Verilog2001Parser::Dimension_constant_expressionContext* /*ctx*/) override {}

     void enterExpression(Verilog2001Parser::ExpressionContext* /*ctx*/) override {}

     void exitExpression(Verilog2001Parser::ExpressionContext* /*ctx*/) override {}

     void enterTerm(Verilog2001Parser::TermContext* /*ctx*/) override {}

     void exitTerm(Verilog2001Parser::TermContext* /*ctx*/) override {}

     void enterLsb_constant_expression(Verilog2001Parser::Lsb_constant_expressionContext* /*ctx*/) override {}

     void exitLsb_constant_expression(Verilog2001Parser::Lsb_constant_expressionContext* /*ctx*/) override {}

     void enterMintypmax_expression(Verilog2001Parser::Mintypmax_expressionContext* /*ctx*/) override {}

     void exitMintypmax_expression(Verilog2001Parser::Mintypmax_expressionContext* /*ctx*/) override {}

     void enterModule_path_conditional_expression(
            Verilog2001Parser::Module_path_conditional_expressionContext* /*ctx*/) override {}

     void exitModule_path_conditional_expression(
            Verilog2001Parser::Module_path_conditional_expressionContext* /*ctx*/) override {}

     void enterModule_path_expression(Verilog2001Parser::Module_path_expressionContext* /*ctx*/) override {}

     void exitModule_path_expression(Verilog2001Parser::Module_path_expressionContext* /*ctx*/) override {}

     void enterModule_path_mintypmax_expression(
            Verilog2001Parser::Module_path_mintypmax_expressionContext* /*ctx*/) override {}

     void exitModule_path_mintypmax_expression(
            Verilog2001Parser::Module_path_mintypmax_expressionContext* /*ctx*/) override {}

     void enterMsb_constant_expression(Verilog2001Parser::Msb_constant_expressionContext* /*ctx*/) override {}

     void exitMsb_constant_expression(Verilog2001Parser::Msb_constant_expressionContext* /*ctx*/) override {}

     void enterRange_expression(Verilog2001Parser::Range_expressionContext* /*ctx*/) override {}

     void exitRange_expression(Verilog2001Parser::Range_expressionContext* /*ctx*/) override {}

     void
    enterWidth_constant_expression(Verilog2001Parser::Width_constant_expressionContext* /*ctx*/) override {}

     void exitWidth_constant_expression(Verilog2001Parser::Width_constant_expressionContext* /*ctx*/) override {}

     void enterConstant_primary(Verilog2001Parser::Constant_primaryContext* /*ctx*/) override {}

     void exitConstant_primary(Verilog2001Parser::Constant_primaryContext* /*ctx*/) override {}

     void enterModule_path_primary(Verilog2001Parser::Module_path_primaryContext* /*ctx*/) override {}

     void exitModule_path_primary(Verilog2001Parser::Module_path_primaryContext* /*ctx*/) override {}

     void enterPrimary(Verilog2001Parser::PrimaryContext* /*ctx*/) override {}

     void exitPrimary(Verilog2001Parser::PrimaryContext* /*ctx*/) override {}

     void enterNet_lvalue(Verilog2001Parser::Net_lvalueContext* /*ctx*/) override {}

     void exitNet_lvalue(Verilog2001Parser::Net_lvalueContext* /*ctx*/) override {}

     void enterVariable_lvalue(Verilog2001Parser::Variable_lvalueContext* /*ctx*/) override {}

     void exitVariable_lvalue(Verilog2001Parser::Variable_lvalueContext* /*ctx*/) override {}

     void enterUnary_operator(Verilog2001Parser::Unary_operatorContext* /*ctx*/) override {}

     void exitUnary_operator(Verilog2001Parser::Unary_operatorContext* /*ctx*/) override {}

     void enterBinary_operator(Verilog2001Parser::Binary_operatorContext* /*ctx*/) override {}

     void exitBinary_operator(Verilog2001Parser::Binary_operatorContext* /*ctx*/) override {}

     void
    enterUnary_module_path_operator(Verilog2001Parser::Unary_module_path_operatorContext* /*ctx*/) override {}

     void
    exitUnary_module_path_operator(Verilog2001Parser::Unary_module_path_operatorContext* /*ctx*/) override {}

     void
    enterBinary_module_path_operator(Verilog2001Parser::Binary_module_path_operatorContext* /*ctx*/) override {}

     void
    exitBinary_module_path_operator(Verilog2001Parser::Binary_module_path_operatorContext* /*ctx*/) override {}

     void enterNumber(Verilog2001Parser::NumberContext* /*ctx*/) override {}

     void exitNumber(Verilog2001Parser::NumberContext* /*ctx*/) override {}

     void enterTiming_spec(Verilog2001Parser::Timing_specContext* /*ctx*/) override {}

     void exitTiming_spec(Verilog2001Parser::Timing_specContext* /*ctx*/) override {}

     void enterAttribute_instance(Verilog2001Parser::Attribute_instanceContext* /*ctx*/) override {}

     void exitAttribute_instance(Verilog2001Parser::Attribute_instanceContext* /*ctx*/) override {}

     void enterAttr_spec(Verilog2001Parser::Attr_specContext* /*ctx*/) override {}

     void exitAttr_spec(Verilog2001Parser::Attr_specContext* /*ctx*/) override {}

     void enterAttr_name(Verilog2001Parser::Attr_nameContext* /*ctx*/) override {}

     void exitAttr_name(Verilog2001Parser::Attr_nameContext* /*ctx*/) override {}

     void enterArrayed_identifier(Verilog2001Parser::Arrayed_identifierContext* /*ctx*/) override {}

     void exitArrayed_identifier(Verilog2001Parser::Arrayed_identifierContext* /*ctx*/) override {}

     void enterBlock_identifier(Verilog2001Parser::Block_identifierContext* /*ctx*/) override {}

     void exitBlock_identifier(Verilog2001Parser::Block_identifierContext* /*ctx*/) override {}

     void enterCell_identifier(Verilog2001Parser::Cell_identifierContext* /*ctx*/) override {}

     void exitCell_identifier(Verilog2001Parser::Cell_identifierContext* /*ctx*/) override {}

     void enterConfig_identifier(Verilog2001Parser::Config_identifierContext* /*ctx*/) override {}

     void exitConfig_identifier(Verilog2001Parser::Config_identifierContext* /*ctx*/) override {}

     void
    enterEscaped_arrayed_identifier(Verilog2001Parser::Escaped_arrayed_identifierContext* /*ctx*/) override {}

     void
    exitEscaped_arrayed_identifier(Verilog2001Parser::Escaped_arrayed_identifierContext* /*ctx*/) override {}

     void
    enterEscaped_hierarchical_identifier(Verilog2001Parser::Escaped_hierarchical_identifierContext* /*ctx*/) override {}

     void
    exitEscaped_hierarchical_identifier(Verilog2001Parser::Escaped_hierarchical_identifierContext* /*ctx*/) override {}

     void enterEvent_identifier(Verilog2001Parser::Event_identifierContext* /*ctx*/) override {}

     void exitEvent_identifier(Verilog2001Parser::Event_identifierContext* /*ctx*/) override {}

     void enterFunction_identifier(Verilog2001Parser::Function_identifierContext* /*ctx*/) override {}

     void exitFunction_identifier(Verilog2001Parser::Function_identifierContext* /*ctx*/) override {}

     void enterGate_instance_identifier(Verilog2001Parser::Gate_instance_identifierContext* /*ctx*/) override {}

     void exitGate_instance_identifier(Verilog2001Parser::Gate_instance_identifierContext* /*ctx*/) override {}

     void
    enterGenerate_block_identifier(Verilog2001Parser::Generate_block_identifierContext* /*ctx*/) override {}

     void exitGenerate_block_identifier(Verilog2001Parser::Generate_block_identifierContext* /*ctx*/) override {}

     void
    enterGenvar_function_identifier(Verilog2001Parser::Genvar_function_identifierContext* /*ctx*/) override {}

     void
    exitGenvar_function_identifier(Verilog2001Parser::Genvar_function_identifierContext* /*ctx*/) override {}

     void enterGenvar_identifier(Verilog2001Parser::Genvar_identifierContext* /*ctx*/) override {}

     void exitGenvar_identifier(Verilog2001Parser::Genvar_identifierContext* /*ctx*/) override {}

     void
    enterHierarchical_block_identifier(Verilog2001Parser::Hierarchical_block_identifierContext* /*ctx*/) override {}

     void
    exitHierarchical_block_identifier(Verilog2001Parser::Hierarchical_block_identifierContext* /*ctx*/) override {}

     void
    enterHierarchical_event_identifier(Verilog2001Parser::Hierarchical_event_identifierContext* /*ctx*/) override {}

     void
    exitHierarchical_event_identifier(Verilog2001Parser::Hierarchical_event_identifierContext* /*ctx*/) override {}

     void enterHierarchical_function_identifier(
            Verilog2001Parser::Hierarchical_function_identifierContext* /*ctx*/) override {}

     void exitHierarchical_function_identifier(
            Verilog2001Parser::Hierarchical_function_identifierContext* /*ctx*/) override {}

     void enterHierarchical_identifier(Verilog2001Parser::Hierarchical_identifierContext* /*ctx*/) override {}

     void exitHierarchical_identifier(Verilog2001Parser::Hierarchical_identifierContext* /*ctx*/) override {}

     void
    enterHierarchical_net_identifier(Verilog2001Parser::Hierarchical_net_identifierContext* /*ctx*/) override {}

     void
    exitHierarchical_net_identifier(Verilog2001Parser::Hierarchical_net_identifierContext* /*ctx*/) override {}

     void enterHierarchical_variable_identifier(
            Verilog2001Parser::Hierarchical_variable_identifierContext* /*ctx*/) override {}

     void exitHierarchical_variable_identifier(
            Verilog2001Parser::Hierarchical_variable_identifierContext* /*ctx*/) override {}

     void
    enterHierarchical_task_identifier(Verilog2001Parser::Hierarchical_task_identifierContext* /*ctx*/) override {}

     void
    exitHierarchical_task_identifier(Verilog2001Parser::Hierarchical_task_identifierContext* /*ctx*/) override {}

     void enterIdentifier(Verilog2001Parser::IdentifierContext* /*ctx*/) override {}

     void exitIdentifier(Verilog2001Parser::IdentifierContext* /*ctx*/) override {}

     void enterInout_port_identifier(Verilog2001Parser::Inout_port_identifierContext* /*ctx*/) override {}

     void exitInout_port_identifier(Verilog2001Parser::Inout_port_identifierContext* /*ctx*/) override {}

     void enterInput_port_identifier(Verilog2001Parser::Input_port_identifierContext* /*ctx*/) override {}

     void exitInput_port_identifier(Verilog2001Parser::Input_port_identifierContext* /*ctx*/) override {}

     void enterInstance_identifier(Verilog2001Parser::Instance_identifierContext* /*ctx*/) override {}

     void exitInstance_identifier(Verilog2001Parser::Instance_identifierContext* /*ctx*/) override {}

     void enterLibrary_identifier(Verilog2001Parser::Library_identifierContext* /*ctx*/) override {}

     void exitLibrary_identifier(Verilog2001Parser::Library_identifierContext* /*ctx*/) override {}

     void enterMemory_identifier(Verilog2001Parser::Memory_identifierContext* /*ctx*/) override {}

     void exitMemory_identifier(Verilog2001Parser::Memory_identifierContext* /*ctx*/) override {}

     void enterModule_identifier(Verilog2001Parser::Module_identifierContext* ident/*ctx*/) override {
        //std::cout << "ModuleIdentifier: " << ident->identifier()->getText()  << std::endl;
    }

     void exitModule_identifier(Verilog2001Parser::Module_identifierContext* /*ctx*/) override {}

     void
    enterModule_instance_identifier(Verilog2001Parser::Module_instance_identifierContext* /*ctx*/) override {}

     void
    exitModule_instance_identifier(Verilog2001Parser::Module_instance_identifierContext* /*ctx*/) override {}

     void enterNet_identifier(Verilog2001Parser::Net_identifierContext* net) override {
        //std::cout << "net: " << net->identifier()->getText() << std::endl;
    }

     void exitNet_identifier(Verilog2001Parser::Net_identifierContext* /*ctx*/) override {}

     void enterOutput_port_identifier(Verilog2001Parser::Output_port_identifierContext* /*ctx*/) override {}

     void exitOutput_port_identifier(Verilog2001Parser::Output_port_identifierContext* /*ctx*/) override {}

     void enterParameter_identifier(Verilog2001Parser::Parameter_identifierContext* /*ctx*/) override {}

     void exitParameter_identifier(Verilog2001Parser::Parameter_identifierContext* /*ctx*/) override {}

     void enterPort_identifier(Verilog2001Parser::Port_identifierContext* /*ctx*/) override {}

     void exitPort_identifier(Verilog2001Parser::Port_identifierContext* /*ctx*/) override {}

     void enterReal_identifier(Verilog2001Parser::Real_identifierContext* /*ctx*/) override {}

     void exitReal_identifier(Verilog2001Parser::Real_identifierContext* /*ctx*/) override {}

     void
    enterSimple_arrayed_identifier(Verilog2001Parser::Simple_arrayed_identifierContext* /*ctx*/) override {}

     void exitSimple_arrayed_identifier(Verilog2001Parser::Simple_arrayed_identifierContext* /*ctx*/) override {}

     void
    enterSimple_hierarchical_identifier(Verilog2001Parser::Simple_hierarchical_identifierContext* /*ctx*/) override {}

     void
    exitSimple_hierarchical_identifier(Verilog2001Parser::Simple_hierarchical_identifierContext* /*ctx*/) override {}

     void enterSpecparam_identifier(Verilog2001Parser::Specparam_identifierContext* /*ctx*/) override {}

     void exitSpecparam_identifier(Verilog2001Parser::Specparam_identifierContext* /*ctx*/) override {}

     void
    enterSystem_function_identifier(Verilog2001Parser::System_function_identifierContext* /*ctx*/) override {}

     void
    exitSystem_function_identifier(Verilog2001Parser::System_function_identifierContext* /*ctx*/) override {}

     void enterSystem_task_identifier(Verilog2001Parser::System_task_identifierContext* /*ctx*/) override {}

     void exitSystem_task_identifier(Verilog2001Parser::System_task_identifierContext* /*ctx*/) override {}

     void enterTask_identifier(Verilog2001Parser::Task_identifierContext* /*ctx*/) override {}

     void exitTask_identifier(Verilog2001Parser::Task_identifierContext* /*ctx*/) override {}

     void enterTerminal_identifier(Verilog2001Parser::Terminal_identifierContext* /*ctx*/) override {}

     void exitTerminal_identifier(Verilog2001Parser::Terminal_identifierContext* /*ctx*/) override {}

     void enterText_macro_identifier(Verilog2001Parser::Text_macro_identifierContext* /*ctx*/) override {}

     void exitText_macro_identifier(Verilog2001Parser::Text_macro_identifierContext* /*ctx*/) override {}

     void enterTopmodule_identifier(Verilog2001Parser::Topmodule_identifierContext* /*ctx*/) override {}

     void exitTopmodule_identifier(Verilog2001Parser::Topmodule_identifierContext* /*ctx*/) override {}

     void enterUdp_identifier(Verilog2001Parser::Udp_identifierContext* /*ctx*/) override {}

     void exitUdp_identifier(Verilog2001Parser::Udp_identifierContext* /*ctx*/) override {}

     void enterUdp_instance_identifier(Verilog2001Parser::Udp_instance_identifierContext* /*ctx*/) override {}

     void exitUdp_instance_identifier(Verilog2001Parser::Udp_instance_identifierContext* /*ctx*/) override {}

     void enterVariable_identifier(Verilog2001Parser::Variable_identifierContext* /*ctx*/) override {}

     void exitVariable_identifier(Verilog2001Parser::Variable_identifierContext* /*ctx*/) override {}

     void
    enterSimple_hierarchical_branch(Verilog2001Parser::Simple_hierarchical_branchContext* /*ctx*/) override {}

     void
    exitSimple_hierarchical_branch(Verilog2001Parser::Simple_hierarchical_branchContext* /*ctx*/) override {}

     void
    enterEscaped_hierarchical_branch(Verilog2001Parser::Escaped_hierarchical_branchContext* /*ctx*/) override {}

     void
    exitEscaped_hierarchical_branch(Verilog2001Parser::Escaped_hierarchical_branchContext* /*ctx*/) override {}


     void enterEveryRule(antlr4::ParserRuleContext* /*ctx*/) override {}

     void exitEveryRule(antlr4::ParserRuleContext* /*ctx*/) override {}

     void visitTerminal(antlr4::tree::TerminalNode* /*node*/) override {}

     void visitErrorNode(antlr4::tree::ErrorNode* /*node*/) override {}

};

