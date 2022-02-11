module reg_fl(
input [3:0]s,
input [31:0]d,
input en,
input clk,rst_b,
output [511:0]q);

wire [15:0] o;

decodificator#
( .w(4))
dec1
(.s(s),
 .e(en),
 .y(o));
generate
  genvar i;
    for(i=0;i<16;i=i+1)
    begin :vect
rgst#
(.w(32),
 .iv(32'd0))
regis
(.d(d),
.clk(clk),
 .rst_b(rst_b),
 .ld(o[i]),
 .clr(1'b0),
 .q(q[32*i+31:32*i]));
end
endgenerate
endmodule