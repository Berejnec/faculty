module LFSR_tb(
output reg clk,
output reg set,
output  [4:0] q);

LFSR m1 (
.clk(clk),
.set(set),
.q(q));

initial begin

set=1'b1;
clk=1'b0;

forever
#10 clk=~clk;

end
endmodule