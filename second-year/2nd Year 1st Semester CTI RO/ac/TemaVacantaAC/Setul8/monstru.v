module monstru(
input st_pkt,
input lo_mgln,
input hi_mgln,
input zero_pkt,
input pad_pkt,
input inc_mgln,
input clr,
input c_up,
input clk,
input rst_b,
input [31:0] pkt,
output [3:0] ldx,
output [511:0] blk);

wire [63:0] q;
wire [63:0] d;
wire [31:0] d2;

sum#(.w(64))
sum1(.a(64'd32),
.b(q),
.o(d));

cntr#(.w(4))
cntr1(
.clk(clk),
.rst_b(rst_b),
.c_up(c_up),
.clr(clr),
.q(ldx));


rgst#(.w(64))
rgst1(.d(d),
.clk(clk),
.rst_b(rst_b),
.ld(inc_mgln),
.clr(clr),
.q(q));

pkt_mux pkt_mux1(
.msg_len(q),
.pkt(pkt),
.pad_pkt(pad_pkt),
.zero_pkt(zero_pkt),
.hi_mgln(hi_mgln),
.lo_mgln(lo_mgln),
.o(d2));
reg_fl reg_fl1(
.s(ldx),
.d(d2),
.en(st_pkt),
.clk(clk),
.rst_b(rst_b),
.q(blk));
endmodule