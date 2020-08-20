// -------------------------------------------------------------------
// @author Andrue Peters
// @copyright (C) 2020
//
// Created : 20. Aug 2020 12:14 AM
//-------------------------------------------------------------------
// Test Verilog Tristate Gates
module tristate_gates();

    // Output wires
    wire bufif0_out, bufif1_out;
    wire notif0_out, notif1_out;

    // Input registers
    reg not_in;
    reg buf_in;
    reg enable_low, enable_high;

    // Single instance of tristate gates
    bufif0 bufif0_0(bufif0_out, buf_in, enable_low);
    bufif1 bufif1_0(bufif1_out, buf_in, enable_high);
    notif0 notif0_0(notif0_out, not_in, enable_low);
    notif1 notif1_0(notif1_out, not_in, enable_high);

endmodule