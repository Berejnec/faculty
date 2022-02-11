module regf1_4x8(
input clk,
input rst_b,
input [7:0] wr_data,
input [1:0] wr_addr,
input wr_e,
output [7:0] rd_data,
input [1:0] rd_addr);
wire[3:0] o;
wire[7:0] re1;
wire[7:0] re2;
wire[7:0] re3;
wire[7:0] re4;
dec2_4 d1(wr_e,wr_addr,o);
register r1(wr_data,clk,o[0],re1);
register r2(wr_data,clk,o[1],re2);
register r3(wr_data,clk,o[2],re3);
register r4(wr_data,clk,o[3],re4);
mux_4_1 m1(re1,re2,re3,re4,rd_addr,rd_data);
endmodule