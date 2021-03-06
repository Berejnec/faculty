module SISR (
input i, clk, rst_b, set_b,
output [3:0] q
);

// Instantiation

dff_ar dff0 ( .d(i ^q[3]),
.clk(clk),
.rst_b (rst_b),
.set_b (1'b1),
.q (q[0]) );

dff_ar dff1 ( .d(q[3] ^ q[0]),
.clk(clk),
.rst_b (rst_b),
.set_b (1'b1),
.q (q[1]) );

dff_ar dff2 ( .d(q[1]),
.clk(clk),
.rst_b (rst_b),
.set_b (1'b1),
.q (q[2]) );

dff_ar dff3 ( .d(q[2]),
.clk(clk),
.rst_b (rst_b),
.set_b (1'b1),
.q (q[3]) );

endmodule