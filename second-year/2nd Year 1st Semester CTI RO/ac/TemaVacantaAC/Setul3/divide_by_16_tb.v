module divide_by_16_tb(
output reg [15:0] i,
output [10:0] o);

divide_by_16 m1(
.i(i),
.o(o));

initial 
i=16'b1010100110101011;
endmodule