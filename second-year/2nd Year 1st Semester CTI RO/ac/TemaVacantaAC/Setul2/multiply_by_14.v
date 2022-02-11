module multiply_by_14(
input [13:0] i,
output [23:0] o);

assign o = i * 4'b1110;
endmodule