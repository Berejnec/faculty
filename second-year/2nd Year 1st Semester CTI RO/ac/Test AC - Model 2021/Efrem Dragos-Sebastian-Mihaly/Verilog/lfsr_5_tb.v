module lfsr_5_tb;
reg clk;
reg rst;
reg set;
wire [4:0] q;

lfsr_5 mylfsr (.clk(clk),.rst_b(rst),.set_b(set),.q(q));

initial begin
  clk <= 1'b0;
  rst <= 1'b0;
  set <= 1'b1;
  #3 rst <= 1'b1;
end

always begin
  #5 clk <= ~clk;
end

endmodule
