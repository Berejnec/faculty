module reg_fl_tb(
output reg [1:0]s,
output reg [3:0]d,
output reg en,
output reg clk,rst_b,
output [15:0]q);
integer i;
reg_fl DUT(
.s(s),
.d(d),
.en(en),
.clk(clk),
.rst_b(rst_b),
.q(q));

initial begin
#5{d,s}=6'd0;
#5 en=1'b1;
#5 rst_b=1'b0;
#5 rst_b=1'b1;
clk=1'b0;

forever
begin
if(d==4'd15)
#5 d=1'b0;
if(s==2'd4)
#5 s=1'b0;
#5 s=s+1'b1;
#5 d=d+1'b1;
#5 clk=~clk;
end
end
endmodule