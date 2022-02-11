module divide_by_4 (
  input [3:0] i,
  output reg [3:0] o
  );
  
  always @(i) begin
      o = i >> 2;
  end
endmodule