module MUL3 (
  input [3:0] i,
  output o
  );
  
assign o = (i%3==0) ? 1 : 0;

endmodule