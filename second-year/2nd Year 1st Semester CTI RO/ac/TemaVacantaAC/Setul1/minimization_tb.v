module minimization_tb (
output reg [3:0] i,
output [3:0] o);

minimization m1(
.i(i),
.o(o));

integer a;

initial begin

for(a=0 ;a<10;a=a+1)
#10 i=a;

end

endmodule