module dff_ar_en(
    input d,
    input clk,
    input rst,
    input en,
    output reg q);
    
always @(posedge clk, negedge rst) begin
   if (!rst)
        q <= 1'b0;
    else  if(en)
        q <= d;
end
endmodule
