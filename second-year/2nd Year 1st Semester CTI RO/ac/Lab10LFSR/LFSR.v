module LFSR (
input clk, rst_b, set_b,
output [3:0] q
);

// Instantiation

dff_ar dff0 ( .d(q[3]),
.clk(clk),
.rst_b (1'b1),
.set_b (set_b),
.q (q[0]) );

dff_ar dff1 ( .d(q[3] ^ q[0]),
.clk(clk),
.rst_b (1'b1),
.set_b (set_b),
.q (q[1]) );

dff_ar dff2 ( .d(q[1]),
.clk(clk),
.rst_b (1'b1),
.set_b (set_b),
.q (q[2]) );

dff_ar dff3 ( .d(q[2]),
.clk(clk),
.rst_b (1'b1),
.set_b (set_b),
.q (q[3]) );

endmodule
