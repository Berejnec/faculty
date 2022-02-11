module multiply_by_14_tb(
output reg [13:0] i,
output [23:0] o);

multiply_by_14 m1 (
.i(i),
.o(o));

initial begin

i=5'b10100;

end

endmodule