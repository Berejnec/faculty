module registrefile_tb#(
  parameter w1=2,
  parameter w2=8,
  parameter iv = {w2{1'b0}}
  ) 
  (
  output reg [1:0]s,
  output reg e,
  output reg clk, rst, 
  output reg [3:0]clr,
  output reg [7:0]d,
  output reg [1:0]sel,
  output[7:0]o
  );

registrefile#(.w1(w1),.w2(w2),.iv(iv)) reg1 (
.s(s),.e(e),.clk(clk),.rst(rst),.clr(clr),.d(d),.sel(sel),.o(o));

initial begin
rst=1'b1;
e=1'b1;
clr=4'd0;
clk=1'b0;
forever
#5 clk= ~clk;
d=8'd1;
#10 s=2'b00;
d=8'd2;
#10 s=2'b01;
d=8'd4;
#10 s=2'b10;
d=8'd8;
#10 s=2'b11;

#10 sel=2'b00;
#10 sel=2'b01;
#10 sel=2'b10;
#10 sel=2'b11;
end
endmodule