module dff_ar(
    input d,
    input clk,
    input rst,
    input set,
    output reg q);
    
always @(posedge clk, negedge set, negedge rst) begin
    if (!set)
        q <= 1'b1;
    else if (!rst)
        q <= 1'b0;
    else 
        q <= d;
end
endmodule
