module mux_3s_1b(
input [2:0] s,
input [7:0] i,
output o);
wire w1,w2,w3,w4,w5,w6;

mux m1(
.i(s[0]),
.d0(i[0]),
.d1(i[1]),
.o(w1));

mux m2(
.i(s[0]),
.d0(i[2]),
.d1(i[3]),
.o(w2));

mux m3(
.i(s[0]),
.d0(i[4]),
.d1(i[5]),
.o(w3));

mux m4(
.i(s[0]),
.d0(i[6]),
.d1(i[7]),
.o(w4));

mux m5(
.i(s[1]),
.d0(w1),
.d1(w2),
.o(w5));

mux m6(
.i(s[1]),
.d0(w3),
.d1(w4),
.o(w6));

mux m7(
.i(s[2]),
.d0(w5),
.d1(w6),
.o(o));

endmodule