module minimization (
  input [3:0] i,
  output [1:0] o
  );
  
  assign o[0] = i[0];
  assign o[1] = ~i[0];
  
endmodule;
