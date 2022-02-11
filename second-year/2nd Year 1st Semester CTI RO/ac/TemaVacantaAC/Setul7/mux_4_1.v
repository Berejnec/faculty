module mux_4_1(
input reg [7:0]d0,
input reg [7:0]d1,
input reg [7:0]d2,
input reg [7:0]d3,
input [1:0]s,
output [7:0]o);
wire [3:0] q;
dec_2ss s1(s,1'b1,q);
pl3s tip1(d0,q[0],o);
pl3s tip2(d1,q[1],o);
pl3s tip3(d2,q[2],o);
pl3s tip4(d3,q[3],o);
endmodule