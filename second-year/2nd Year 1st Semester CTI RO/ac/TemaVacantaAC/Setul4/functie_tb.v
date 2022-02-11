module functie_tb(
output reg [3:0] s,
output  o);

functie m1(
.s(s),
.o(o));

initial begin

#10 s=4'b0000;
#10 s=4'b0001;
#10 s=4'b0010;
#10 s=4'b0011;
#10 s=4'b0100;
#10 s=4'b0101;
#10 s=4'b0110;
#10 s=4'b0111;
#10 s=4'b1000;
#10 s=4'b1001;
#10 s=4'b1010;
#10 s=4'b1011;
#10 s=4'b1100;
#10 s=4'b1101;
#10 s=4'b1110;
#10 s=4'b1111;


end

endmodule