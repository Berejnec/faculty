module boolean_function_4_tb(
output reg A,
output reg B,
output reg C,
output reg D,
output F);

integer a;

boolean_function_4 m1(
.A(A),
.B(B),
.C(C),
.D(D),
.F(F));

initial begin

for(a=0;a<16;a=a+1)
#10 {A,B,C,D} = a;
end
endmodule
