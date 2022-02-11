module sum#(
parameter w=8
)(
input [w-1:0] a,
input [w-1:0] b,
output [w-1:0] o
);

assign o = a+b;
endmodule
