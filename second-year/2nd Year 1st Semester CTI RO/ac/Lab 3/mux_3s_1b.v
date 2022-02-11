module mux_3s_1b (
  input [7:0] d,
  input [2:0] s,
  output o
  );
  
wire w1,w2,w3,w4,w5,w6; // [5:0]w;

// Layer 1

mux_1s_1b m1 (
                .d1(d[7]),
                .d0(d[6]),
                .s(s[0]),
                .o(w1)
                );

mux_1s_1b m2 (
                .d1(d[5]),
                .d0(d[4]),
                .s(s[0]),
                .o(w2)
                );

mux_1s_1b m3 (
                .d1(d[3]),
                .d0(d[2]),
                .s(s[0]),
                .o(w3)
                );
                
mux_1s_1b m4 (
                .d1(d[1]),
                .d0(d[0]),
                .s(s[0]),
                .o(w4)
                );
                
// Layer 2

mux_1s_1b m5 (
                .d1(w1),
                .d0(w2),
                .s(s[1]),
                .o(w5)
                );

mux_1s_1b m6 (
                .d1(w3),
                .d0(w4),
                .s(s[1]),
                .o(w6)
                );
                
// Layer 3

mux_1s_1b m7 (
                .d1(w5),
                .d0(w6),
                .s(s[2]),
                .o(o)
                );
                
endmodule
