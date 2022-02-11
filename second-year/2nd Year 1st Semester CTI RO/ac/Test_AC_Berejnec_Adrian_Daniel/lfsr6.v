module LFSR6 (
  input clk, rst_b,set_b,
  output [5:0] q
  );
  
  generate 
    genvar i;
    for(i=0;i<6;i=i+1)
    begin: arr
      dff dff0 ( .d(q[5]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[0]) );
      dff dff1 ( .d(q[0]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[1]) );
      dff dff2 ( .d(q[1]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[2]) );
      dff dff3 ( .d(q[2]^q[5]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[3]) );
      dff dff4 ( .d(q[3]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[4]) );
      dff dff5 ( .d(q[4]), .clk(clk), .rst_b(1'b1), .set_b(set_b), .q(q[5]) );
    end
  endgenerate
  
endmodule