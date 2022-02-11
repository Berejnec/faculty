/*module mux_1s_1b (
  input s,d0,d1,
  output o
  );
  
assign o = s ? d1: d0;
endmodule*/


module mux_1s_1b (
  input s,d0,d1,
  output reg o // toate iesirile pentru blocul always vor fi obligatoriu de tip reg
  );
  
always @(*) begin //{
    
    if (s) // s==1
    
      o = d1;
    else
      o = d0;
end //}
endmodule