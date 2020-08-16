module test2(a, b, c);
input a;
output b, c;

wire w1, w2;

and and1(b, a);
endmodule


module test(a, b, c, d);
input a;
input b;
output c;
inout d;

wire w1;
wire w2;

and and1(c, a, b);

endmodule

