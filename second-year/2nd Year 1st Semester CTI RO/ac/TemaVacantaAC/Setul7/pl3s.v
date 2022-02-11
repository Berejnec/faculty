module pl3s(
input [7:0] data,
input e,
output [7:0] data_hiz);
assign data_hiz= (e) ? data :8'bz;
endmodule