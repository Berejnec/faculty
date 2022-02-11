module lfsr_5 (
  input rst_b,
  input set_b,
  input clk,
  output [4:0] q
);

dff_ar dff1(.d(q[4]),.clk(clk),.set(set_b),.rst(rst_b),.q(q[0]));
dff_ar dff2(.d(q[1]^q[4]),.clk(clk),.set(set_b),.rst(rst_b),.q(q[1]));
dff_ar dff3(.d(q[1]),.clk(clk),.set(set_b),.rst(rst_b),.q(q[2]));
dff_ar dff4(.d(q[2]),.clk(clk),.set(set_b),.rst(rst_b),.q(q[3])); 
dff_ar dff5(.d(q[4]^q[3]),.clk(clk),.set(rst_b),.rst(1'b1),.q(q[4])); 


endmodule