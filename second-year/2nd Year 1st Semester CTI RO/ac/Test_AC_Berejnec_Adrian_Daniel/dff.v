module dff (
  input d, rst_b, set_b, clk,
  output reg q
  );
  always @(posedge clk, negedge rst_b, negedge set_b) begin
  if (set_b==0)
    q <= 1'b1;
  else
      if (rst_b==0) q <= 1'b0;
    else q <= d;
  end
endmodule
