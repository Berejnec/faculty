module regf1(
output reg clk,
output reg rst_b,
output reg [7:0] wr_data,
output reg [1:0] wr_addr,
output reg wr_e,
output [7:0] rd_data,
output reg [1:0] rd_addr);
final DUT(clk,rst_b,wr_data,wr_addr,wr_e,rd_data,rd_addr);
initial begin //
rst_b =1'b1;
wr_e=1'b0;
#5 rst_b=1'b0;
#5 rst_b=1'b1;
wr_e=1'b1;
end

initial begin
clk=1'd0;
forever 
#10 clk=~clk;
end
initial begin
#10
wr_data=8'd1;
wr_addr=2'b00;
#10

wr_data=8'd2;
wr_addr=2'b01;
#10

wr_data=8'd3;
wr_addr=2'b10;
#10

wr_data=8'd4;
wr_addr=2'b11;
#10
rd_addr=2'b00;
#10
rd_addr=2'b01;
#10
rd_addr=2'b10;
#10
rd_addr=2'b11;

end
endmodule