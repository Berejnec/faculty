module mux_2s_tb # ( parameter w = 4) (
  output reg [w-1:0] d0,d1,d2,d3,
  output reg [1:0] s,
  output [w-1:0] o
  );
  
  mux_2s # (.w(4)) DUT (
      .d0(d0),
      .d1(d1),
      .d2(d2),
      .d3(d3),
      .s(s),
      .o(o)
      );
      
    integer i;
    initial begin
      s = 6'd0;
      d0 = 6'd0;
      d1 = 6'd0;
      d2 = 6'd0;
      d3 = 6'd0;
      for(i = 0;i < 64; i = i + 1)
       #50 s = 6'd0;
       #50 d0 = 6'd0;
       #50 d1 = 6'd0;
       #50 d2 = 6'd0;
       #50 d3 = 6'd0;
      end
    endmodule
