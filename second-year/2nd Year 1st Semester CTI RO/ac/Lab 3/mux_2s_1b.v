module mux_2s_1b (
  input [3:0]d,
  input [1:0]s,
  output o
  );
  
assign o = s[1] ? (s[0] ? d[3]:d[2]) : (s[0] ? d[1]:d[0]);

endmodule
