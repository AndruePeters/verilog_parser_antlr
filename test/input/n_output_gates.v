// -------------------------------------------------------------------
// @author Andrue Peters
// @copyright (C) 2020
//
// Created : 19. Aug 2020 11:44 PM
//-------------------------------------------------------------------
// Test Verilog n_input_gates
module n_input_gates();

    // Output wires
    wire not_out_0, not_out_1;
    wire buf_out_0, buf_out_1;

    // Input registers
    reg not_in;
    reg buf_in;

    // Single instance of n_input_gates
    not not_0(not_out_0, not_out_1, not_in);
    buf buf_0(buf_out_0, buf_out_1, buf_in);

endmodule