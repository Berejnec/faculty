module pkt_mux(
input [63:0] msg_len,
input [31:0]pkt,
input pad_pkt,
input zero_pkt,
input hi_mgln,
input lo_mgln,
output [31:0]o);

assign o = pad_pkt ?  {1'b1,31'd0} : (zero_pkt ? 32'd0 : (hi_mgln ? msg_len[63:32] : (lo_mgln ? msg_len[31:0] : pkt )));

endmodule