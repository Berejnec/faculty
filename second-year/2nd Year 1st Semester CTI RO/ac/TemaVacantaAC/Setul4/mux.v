module mux(
input i,
input d0,d1,
output o);

assign o = i? d1:d0;
endmodule