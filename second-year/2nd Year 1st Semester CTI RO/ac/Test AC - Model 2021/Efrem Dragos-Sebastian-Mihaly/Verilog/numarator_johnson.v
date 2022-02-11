module numarator_johnson(
  input clk,
  input rst_b,
  output [2:0] o
);

dff_ar_en dff1 (.d(o[1]),.clk(clk),.rst(rst_b),.en(~rst_b),.q(o[2]));
dff_ar_en dff2 (.d(o[0]),.clk(clk),.rst(rst_b),.en(~rst_b),.q(o[1]));
dff_ar_en dff3 (.d(~o[2]),.clk(clk),.rst(rst_b),.en(~rst_b),.q(o[0]));

endmodule