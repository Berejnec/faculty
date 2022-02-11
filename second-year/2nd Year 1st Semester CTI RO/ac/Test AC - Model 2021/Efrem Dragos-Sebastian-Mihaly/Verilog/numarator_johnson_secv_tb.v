module numarator_johnson_secv_tb;
reg clk;
reg rst;
reg en;
wire [2:0] q;

numarator_johnson_secvential myNumarator (.clk(clk),.rst(rst),.en(en),.q(q));

initial begin
  clk <= 1'b1;
  rst <= 1'b1;
  en <= 1'b1;  
end

always begin
  #5 clk <= ~clk;
end

endmodule