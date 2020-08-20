// -------------------------------------------------------------------
// @author Andrue Peters
// @copyright (C) 2020
//
// Created : 19. Aug 2020 9:58 PM
//-------------------------------------------------------------------
// Test Verilog n_input_gates
module n_input_gates();

    // Output wires
    wire and_out_0;
    wire nand_out_0;
    wire xor_out_0;
    wire xnor_out_0;
    wire or_out_0;
    wire nor_out_0;

    // Input registers
    reg in1, in2, in3, in4;

    // Single instance of verilog n_input gate instances
    and and_0(      and_out_0,  in1, in2, in3, in4);
    nand nand_0(    nand_out_0, in1, in2, in3, in4);
    xor xor_0(      xor_out_0,  in1, in2, in3, in4);
    xnor xnor_0(    xnor_out_0, in1, in2, in3, in4);
    or or_0(        or_out_0,   in1, in2, in3, in4);
    nor nor_0(      nor_out_0,  in1, in2, in3, in4);
endmodule