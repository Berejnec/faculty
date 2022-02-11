module regfl_4x8_tb(
output reg clk,
output reg rst_b,
output reg [7:0] wr_data,
output reg [1:0] wr_addr,
output reg wr_e,
output [7:0] rd_data,
output reg [1:0] rd_addr);
regf1_4x8 DUT(clk,rst_b,wr_data,wr_addr,wr_e,rd_data,rd_addr);
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
wr_addr=2'b0;
rd_addr=2'b0;
forever begin
#10 wr_addr=wr_addr+1'b1;
#10 rd_addr=rd_addr+1'b1;
if(wr_addr==2'b11)
#10 wr_addr=2'b0;
if(rd_addr==2'b11)
#10 rd_addr=2'b0;
end
end

initial begin 
wr_data=8'd0;
forever begin
#10 wr_data=wr_data+1'b1;
if(wr_data==8'b11111111)
#10 wr_data=8'd0;
end
end
endmodule