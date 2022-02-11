module mux_tb(
output reg [2:0] s,
output reg [7:0] i,
output o);

mux_3s_1b m1(
.s(s),
.i(i),
.o(o));

initial begin
i=8'b11110000;

#10
s=3'b000;
#10
s=3'b111;

end

endmodule