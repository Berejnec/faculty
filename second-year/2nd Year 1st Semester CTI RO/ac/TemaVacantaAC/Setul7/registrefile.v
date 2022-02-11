module registrefile#(
  parameter w1=2,
  parameter w2=8,
  parameter iv = {w2{1'b0}}
  )
  (
  input [w1-1:0]s,
  input e,
  input clk, rst, 
  input [w1*w1-1:0]clr,
  input [w2-1:0]d,
  input [1:0]sel,
  output[w2-1:0]o
  );
  
  reg [3:0]dec_out;
  reg [w2-1:0]wire_0, wire_1,wire_2, wire_3;
  
  
  decodificator#(
  .w(w1)
  )decoder2(
  .s(s),
  .e(e),
  .o(dec_out)
  );
  
  registru#(
  .w(w2),
  .iv(iv)
  ) reg_0(
  .clk(clk),
  .rst(rst),
  .d(d),
  .ld(dec_out[0]),
  .clr(clr[0]),
  .o(wire_0)
  );
  
  registru#(
  .w(w2),
  .iv(iv)
  ) reg_1(
  .clk(clk),
  .rst(rst),
  .d(d),
  .ld(dec_out[1]),
  .clr(clr[1]),
  .o(wire_1)
  );
  
  registru#(
  .w(w2),
  .iv(iv)
  ) reg_2(
  .clk(clk),
  .rst(rst),
	.d(d),
  .ld(dec_out[2]),
  .clr(clr[2]),
  .o(wire_2)
  );
  
  registru#(
  .w(w2),
  .iv(iv)
  ) reg_3(
  .clk(clk),
  .rst(rst),
.d(d),
  .ld(dec_out[3]),
  .clr(clr[3]),
  .o(wire_3)
  );
  
  mux41#(
  .w(w2)
  ) mux_0 (
  .d({wire_3, wire_2, wire_1, wire_0}),
  .sel(sel),
  .o(o)
  );
endmodule