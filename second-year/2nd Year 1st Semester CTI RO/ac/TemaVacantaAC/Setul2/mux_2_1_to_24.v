module mux_2_1_to_24(
input [15:0] i,
input switch,
output [9:0] o);

assign o = switch ? (i[15:6]) : (i[9:0]);

endmodule
