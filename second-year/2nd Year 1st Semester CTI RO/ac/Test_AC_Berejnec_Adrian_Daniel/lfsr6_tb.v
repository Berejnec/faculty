module lfsr6_tb(
  output reg clk, rst_b, set_b,
  output [5:0] q
  );
  
  initial begin
    clk = 1'd1;
    forever #10 clk = ~clk;
    rst_b = 1'b0;
    #10 rst_b = ~rst_b;
    
    set_b = 1'b1;
    #10 set_b = ~set_b;
  end
endmodule
