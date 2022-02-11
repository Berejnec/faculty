module my_minimisation(
  input i3,i2,i1,i0,
  output reg o3,o2,o1,o0);
  
  always @(i3,i2,i1,i0) begin
    o3 = i3 | (i2 & i0) | (i2 & i1);
    o2 = (~i2&i0) | (i2&~i1&~i0) | (~i2&i1);
    o1 = i1 ^ i0;
    o0 = i0;
  end
  
endmodule
