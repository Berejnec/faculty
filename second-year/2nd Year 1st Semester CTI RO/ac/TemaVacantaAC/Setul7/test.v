module test(
input clk,
input rst_b,
output [3:0] mg);

wire [3:0] q;
wire b;

lfsr_4 abb (
.clk(clk),
.rst_b(rst-b),
.q(q));

gt10 aba (
.a(q),
.b(b));

sisr_4 abc (
.i(b),
.clk(clk),
.rst_b(rst_b),
.q(mg));


endmodule