module gt10(
input [3:0] a,
output b);

assign b= (a[3] & a[2]) | (a[3] & a[1] & a[0]);
endmodule