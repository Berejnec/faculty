module paritybit_tb(
output reg [6:0] i,
output [7:0] o);

paritybit m1(
.i(i),
.o(o));

initial begin
#10 
i=7'b1010101;
#10
i=7'b1111001;


end

endmodule