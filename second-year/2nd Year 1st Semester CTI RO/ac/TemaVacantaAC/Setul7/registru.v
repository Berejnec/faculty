module rgst #(
parameter w = 8, //parametrul de l??ime a registrului, valoarea implicit? 8
parameter iv = {w{1'b0}} //ini?ializarea valorii parametrului
)(
input clk , //semnalul de tact
input rst_b , //reset asincron; activ pe low
input [w-1:0] d , //datele de intrare pe w bti
input ld , // load sincron; activ pe high
input clr , //clear sincron; activ pe high
output reg [w-1:0] q //continutul registrului, pe w biti
);
always @ ( posedge clk, negedge rst_b )
begin
if (! rst_b)
q <= iv; //setarea continutului la valoarea de initializare
else if (clr)
q <= iv; //setarea continutului la valoarea de initializare
else if ( ld )
q <= d;
end
endmodule
