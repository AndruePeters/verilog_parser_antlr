// -------------------------------------------------------------------
// @author Andrue Peters
// @copyright (C) 2020
//
// Created : 20. Aug 2020 6:00 PM
//-------------------------------------------------------------------
// Test Verilog Continuous Assignment
module continuous_assignment();

    wire simple_assign_out_0, and_assign_0;
    wire [7:0] vectored_assign_out_0;
    wire [3:0] subvectored_assign_out_0;

    reg in1, in2;
    reg [7:0] in_bus_0;
    reg [7:0] in_bus_1;

    // Simple assignment
    assign simple_assign_out_0 = in1;

    // Assign using an operator
    assign and_assign_0 = in1 & in2;

    // Net declaration assignment
    // Currently crashes program. Need to fix
    // wire net_decl_assignment_out_0 = in1;

    // Vectored Assignment
    assign vectored_assign_out_0 = in_bus_0;

    assign subvectored_assign_out_0 = in_bus_0[4:1];

endmodule
