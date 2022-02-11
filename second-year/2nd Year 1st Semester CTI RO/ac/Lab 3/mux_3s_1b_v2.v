module mux_3s_1b_v2 (
  input [7:0] d,
  input [2:0] s,
  output o
  );
  
wire w1,w2;

// Layer 1

mux_2s_1b m1 (
                .d(d[7:4]),
                .s(s[1:0]),
                .o(w1)
                );

mux_2s_1b m2 (
                .d(d[3:0]),
                .s(s[1:0]),
                .o(w2)
                );
                
// Layer 2

mux_1s_1b m3 (
                .d1(w1),
                .d0(w2),
                .s(s[2]),
                .o(o)
                );
                
endmodule