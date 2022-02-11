module dec_2ss(
input [1:0] s,
input e,
output reg [3:0] o);
initial begin
if(e)
begin
if(!s[1])
if(!s[0])
 o=4'b0001;
else
 o=4'b0010;
else
if(!s[0])
 o =4'b0100;
else
o= 4'b1000;
end
end
endmodule

