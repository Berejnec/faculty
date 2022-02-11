module lfsr (
  input clk, rst_b,
  output [8:0] q
);
  generate
    genvar i;
    
    for (i = 0; i < 9; i = i + 1) begin:id0
      if (i == 0)
        d_ff #(.iv(12'h0x135)) i0 (.clk(clk), .rst_b(rst_b), .d(q[0] ^ (q[2] ^ (q[3] ^ (q[4] ^ (q[7] ^ q[8]))))), .q(q[0]));
      else
        d_ff #(.iv(12'h0x135)) i0 (.clk(clk), .rst_b(rst_b), .d(q[i-1]), .q(q[i]));
    end
  endgenerate
endmodule

module lfsr_tb;
  reg clk, rst_b;
  wire [8:0] q;
  
  lfsr cut (.clk(clk), .rst_b(rst_b), .q(q));
  
  localparam CLK_PERIOD = 100;
  localparam RUNNING_CYCLES = 35;
  initial begin
    clk = 0;
    repeat (2 * RUNNING_CYCLES) begin
      #(CLK_PERIOD/2) ;
      clk = ~clk;
    end
  end
  
  localparam RST_DURATION = 25;
  initial begin
    rst_b = 1;
    #(RST_DURATION) ;
    rst_b = 0;
  end
endmodule