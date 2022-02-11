module mux2(
input d0,
input d1,
input s,
output o);
assign o = s? d1:d0;
endmodule