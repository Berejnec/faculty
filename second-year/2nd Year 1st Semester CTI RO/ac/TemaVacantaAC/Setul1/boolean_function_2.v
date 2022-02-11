module boolean_function_2(
input A,
input B,
input C,
output F);

assign F = C & (A | B);
endmodule