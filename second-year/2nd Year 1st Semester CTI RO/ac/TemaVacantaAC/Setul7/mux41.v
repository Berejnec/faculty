module mux41 # (
parameter w=8)(
input [1:0] s,
input [4*w-1:0] d,
output [w-1:0] q);

assign q = s[1] ? ( s[0] ? d[4*w-1:3*w]:d[3*w-1:w*2]) : ( s[0]? d[2*w-1:w] : d[w-1:0]);

endmodule