module decodificator #(
  parameter w = 2
)( 
  input [w-1:0] s,
  input e,
  output reg [(1<<w)-1:0] y
);

  always @(*) begin
    y = 'b0;
    y[s] = e;
  end
endmodule
