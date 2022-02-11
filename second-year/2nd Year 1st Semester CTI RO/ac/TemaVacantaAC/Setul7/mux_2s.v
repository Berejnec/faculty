module mux_2s #(
parameter w=4)
(
input [w-1:0] d0,d1,d2,d3,
input [1:0] s,
output [w-1:0] o);

assign o = s[1]? (s[0] ? d3:d2) : (s[0] ? d1:d0);

endmodule