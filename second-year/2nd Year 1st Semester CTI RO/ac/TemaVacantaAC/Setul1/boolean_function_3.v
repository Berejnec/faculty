module boolean_function_3(
input A,
input B,
input C,
output F);

assign F = ~C | (A & B);

endmodule