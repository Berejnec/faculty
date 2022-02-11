module cntr#(
parameter w=8,
parameter iv = {w{1'b0}}
)(
input clk,
input rst_b,
input c_up,
input clr,
output [w-1:0] q);
wire [w-1:0]d;
assign d = q+{{(w-1){1'b0}},1'b1};
rgst #(
.w(w),
.iv(iv))u_rgst(
.clk(clk),
.rst_b(rst_b),
.d(d),
.ld(c_up),
.clr(clr),
.q(q)
);
endmodule