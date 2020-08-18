module top_c0 (
    input [13:0] i,
    output [11:0] o
);

    wire [13:0] a;
    wire [11:0] b;

    assign a = i;
    assign o = b;

    c1 C1_0 (.in(a[3:0]), .out(b[3:0]));
    c1 C1_1 (.in(a[7:4]), .out(b[7:4]));
    c2 C2_0 (.in0(a[8]), .in1(a[9]), .y(b[8]), .z(b[9]));
    c3 C3_0 (.c(a[10]), .d(a[11]), .e(b[10]));
    c3 C3_1 (.c(a[12]), .d(a[13]), .e(b[11]));

endmodule // top_c0


module c1 (
    input [3:0] in,
    output [3:0] out
);
    c2 C2_0 (.in0(in[0]), .in1(in[1]), .y(out[0]), .z(out[1]));
    c2 C2_1 (.in0(in[0]), .in1(in[1]), .y(out[0]), .z(out[1]));


    c2 C2_2 (
        .in0(in[2]),
        .in1(in[3]), .y(out[2]), .z(out[3]));

endmodule // c1


module c2 (
    input in0, in1,
    output y, z
);
    and AND_0 (y, in0, in1);

    not NOT_0 (z, in0);

endmodule // c2

module c3 (
    input c,
    input d,
    output e
);
    c4 C4_0 (.f(c), .g(d), .h(e));
endmodule // c3

module c4 (
    input f,
    input g,
    output h
);
    c5 C5_0 (.j(f), .k(g), .l(h));
endmodule // c4

module c5 (
    input j,
    input k,
    output l
);
    c6 C6_0 (.m(j), .n(k), .p(l));
endmodule // c5

module c6 (
     m,
     n,
     p
);
    input m, n; 
    output p;
    or OR_0 (p, m, n);
endmodule // c6