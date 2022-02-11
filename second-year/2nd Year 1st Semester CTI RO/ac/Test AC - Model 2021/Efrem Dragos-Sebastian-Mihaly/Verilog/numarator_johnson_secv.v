module numarator_johnson_secvential (
     input clk,
     input rst,
     input en,
     output reg [2:0] q
  );

reg [2:0] aux = 3'b100;

initial begin
    q <= 3'b000;
end

always @(posedge clk, negedge rst) begin
  if (!rst) 
    q <= 0;
  else if (en) begin
    q <= q^aux;
    aux <= aux >> 1;
    if (aux == 0)
      aux <= 3'b100;
  end
end
endmodule