module paritybit(
input [6:0] i,
output [7:0] o);

assign o = { ^i , 7'd0 };
endmodule