module sum_tb(
output reg [63:0] a,
output reg [63:0] b,
output [63:0] o);

sum#(.w(64))
sum1(
.a(a),
.b(b),
.o(o));

initial begin
#10
a=64'd1;
b=64'd1;
#10
a=64'd2;
b=64'd1;
#10
a=64'd2;
b=64'd2;
end
endmodule
