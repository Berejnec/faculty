module register(
input [7:0] D,
input clk,
input Clear,
output reg [7:0] Q);

always @(posedge clk)
if(Clear)
Q= 0 ;
else
Q= D ;
endmodule