module BIST (
input clk, rst_b, set_b,
output [3:0] q
);

wire [3:0] w1;
wire w2;

// Instantiation

LFSR TPG ( 

.clk(clk),
.rst_b (1'b1),
.set_b (set_b),
.q (w1)
);

MUL_3 DUT ( 

.i(w2),
.o (w1)
);

SSIR ORA ( 

.clk(clk),
.rst_b (rst_b),
.set_b (1'b1),
.q (q)
);
endmodule
