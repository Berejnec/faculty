module divide_by_16(
input [15:0] i,
output [10:0] o);

assign o = i >>5;
endmodule