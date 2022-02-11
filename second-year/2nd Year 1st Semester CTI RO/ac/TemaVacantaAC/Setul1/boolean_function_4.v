module boolean_function_4(
input A,
input B,
input C,
input D,
output F);

assign F = (B & C & ~D);
endmodule