module mux_3s_1b_tb(
output reg [2:0] s,
output reg [7:0] i,
output o);

mux_3s_1b m1(
.s(s),
.i(i),
.o(o));

initial begin
i=8'b10101010;

#10 s=3'b000;
#10 s=3'b001;
#10 s=3'b010;
#10 s=3'b011;
#10 s=3'b100;
#10 s=3'b101;
#10 s=3'b110;
#10 s=3'b111;

end

endmodule