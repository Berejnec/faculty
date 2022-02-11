module functie(
input [3:0] s,
output  o);

wire [15:0]i,o1,o2;

mux_3s_1b m1(
.s(s[2:0]),
.i(i[15:8]),
.o(o1));

mux_3s_1b m2(
.s(s[2:0]),
.i(i[7:0]),
.o(o2));


assign i=16'b0111100000011010;

assign o = s[3]? o1 : o2;


endmodule