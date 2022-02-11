module pkt_mux_tb(
output reg [63:0] msg_len,
output reg [31:0]pkt,
output reg pad_pkt,
output reg zero_pkt,
output reg hi_mgln,
output reg lo_mgln,
output [31:0]o);

pkt_mux DUT(
.msg_len(msg_len),
.pkt(pkt),
.pad_pkt(pad_pkt),
.zero_pkt(zero_pkt),
.hi_mgln(hi_mgln),
.lo_mgln(lo_mgln),
.o(o));

initial begin

#10
msg_len = 64'habcd0123456789ef;
pkt = 32'h01234567;
pad_pkt = 1'b0;
zero_pkt = 1'b0;
hi_mgln = 1'b0;
lo_mgln = 1'b0;
#10
pkt = 31'haabbccdd;
pad_pkt = 1'b1;
#10
pad_pkt = 1'b0;
zero_pkt = 1'b1;
msg_len = 64'h4567abcd0123ef89;
pkt = 32'h55555555;
#10
pkt = 32'hffffffff;
#10
msg_len =64'haabbccddeeff0011;
pkt = 32'h37281955;
zero_pkt = 1'b0;
hi_mgln = 1'b1;
#10
pkt = 31'h0000ffff;
hi_mgln = 1'b0;
lo_mgln = 1'b1;
end

endmodule