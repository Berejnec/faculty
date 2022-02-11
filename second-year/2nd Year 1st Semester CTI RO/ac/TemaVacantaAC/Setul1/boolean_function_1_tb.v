module boolean_function_1_tb(
output reg A,
output reg B,
output F);

boolean_function_1 m1(
.A(A),
.B(B),
.F(F));

integer a;
initial begin
for(a=0;a<4;a=a+1)
#10 {A , B} = a;


end
endmodule
