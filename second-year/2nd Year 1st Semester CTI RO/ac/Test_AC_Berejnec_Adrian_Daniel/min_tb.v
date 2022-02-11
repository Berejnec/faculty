module min_tb (
  output reg [3:0] i,
  output [1:0] o
  );
  
  minimization DUT(
    .i(i),
    .o(o)
    );
    
    initial begin
    i = 4'b0000;
    forever #20 i=i+1;
  end
  
endmodule
