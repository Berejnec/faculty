module monstru_tb(
output reg st_pkt,
output reg lo_mgln,
output reg hi_mgln,
output reg zero_pkt,
output reg pad_pkt,
output reg inc_mgln,
output reg clr,
output reg c_up,
output reg clk,
output reg rst_b,
output reg [31:0] pkt,
output [3:0] ldx,
output [511:0] blk);

monstru DUT(
.st_pkt(st_pkt),
.lo_mgln(lo_mgln),
.hi_mgln(hi_mgln),
.zero_pkt(zero_pkt),
.pad_pkt(pad_pkt),
.inc_mgln(inc_mgln),
.clr(clr),
.c_up(c_up),
.rst_b(rst_b),
.clk(clk),
.pkt(pkt),
.ldx(ldx),
.blk(blk));

initial begin
rst_b=1'b0;
clr=1'b0;
st_pkt=1'b1;
c_up=1'b1;
clk=1'b0;
inc_mgln=1'b1;
pad_pkt=1'b0;
zero_pkt=1'b0;
hi_mgln=1'b0;
lo_mgln=1'b0;
pkt=32'h01234567;
#1
rst_b=1'b1;
#10 clk=~clk;   
#10 clk=~clk;   
pkt=32'haabbccdd;
#10 clk=~clk;   
#10 clk=~clk;   
inc_mgln=1'b0;
pkt=32'h0123fedc;
#10 clk=~clk;   
#10 clk=~clk;   
#10 clk=~clk;   
pad_pkt=1'b1;
pkt=32'h56788765;
#10 clk=~clk;   
#10 clk=~clk;   
#10 clk=~clk;   
zero_pkt=1'b1;
pad_pkt=1'b0;
pkt=32'h00110022;
#10 clk=~clk;   
#10 clk=~clk;   
hi_mgln=1'b1;
zero_pkt=1'b0;
pkt=32'hffff0000;
#10 clk=~clk;   
#10 clk=~clk;   
#10 clk=~clk;   
lo_mgln=1'b1;
hi_mgln=1'b0;
pkt=32'ha0a0a0a0;
#10 clk=~clk;   
#10 clk=~clk;   
end 
endmodule