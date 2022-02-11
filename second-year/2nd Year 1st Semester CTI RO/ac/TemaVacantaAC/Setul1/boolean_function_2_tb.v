module boolean_function_2_tb(
output reg A,
output reg B,
output reg C,
output F);

boolean_function_2 m1(
.A(A),
.B(B),
.C(C),
.F(F));

integer a;

initial begin

for(a=0;a<8;a=a+1)
#10 {A , B , C} = a;
end

endmodule