module LFSR(
input clk,
input set,
output  [4:0] q);

DQ m1(
.D(q[4]),
.clk(clk),
.rst(1'b1),
.set(set),
.Q(q[0]));

DQ m2(
.D(q[4]^q[0]),
.clk(clk),
.rst(1'b1),
.set(set),
.Q(q[1]));

DQ m3(
.D(q[1]),
.clk(clk),
.rst(1'b1),
.set(set),
.Q(q[2]));

DQ m4(
.D(q[2]),
.clk(clk),
.rst(1'b1),
.set(set),
.Q(q[3]));

DQ m5(
.D(q[3] ^ q[4]),
.clk(clk),
.rst(1'b1),
.set(set),
.Q(q[4]));

endmodule