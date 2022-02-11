module mux_2_1_to_24_tb(
output reg [15:0] i,
output reg switch,
output [9:0] o);

mux_2_1_to_24 m1 (
.i(i),
.switch(switch),
.o(o));

initial begin

i=16'b1111111111000000;

#10 switch =1'b1;
#10 switch =1'b0;
end
endmodule