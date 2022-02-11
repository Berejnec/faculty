module divide_by_4_tb;
reg [3:0] i;
wire [3:0] o;
divide_by_4 myTest (.i(i), .o(o));
initial begin
  i = 4'b0000;
end
always begin
  i = i + 4'b0001;  
end
endmodule;
