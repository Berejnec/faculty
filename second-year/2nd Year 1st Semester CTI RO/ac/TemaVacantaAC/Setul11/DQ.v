module DQ(
input D,
input clk,  
input rst,
input set, 
output reg Q); 

always @(posedge clk) 
begin
 if(rst==1'b0)
  Q <= 1'b0; 
 else 
if(set==1'b0)
Q <= 1'b0;
else

  Q <= D; 
end 

endmodule