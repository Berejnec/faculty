module d_ff #(parameter iv = 12'h0x135)(
  input clk, rst_b, d,
  output reg q
);
  
  always @ (posedge clk)
    if (rst_b)           q <= iv;
    else                 q <= d;
endmodule