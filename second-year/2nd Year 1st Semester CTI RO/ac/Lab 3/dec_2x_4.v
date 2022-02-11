/*module dec_2x_4 (
  input [1:0]x,
  input e,
  output [3:0] y
  );

assign y = e ? 1 << x : 4'b0;

endmodule*/

/*module dec_2x_4 (
  input [1:0]x,
  input e,
  output reg [3:0] y
  );
  
  always @(*) begin //{
      
      if (e)
        if (x==0) 
          y = 4'b0001;
        else
          if (x==1)
            y = 4'b0010;
          else
            if (x==2)
              y = 4'b0100;
            else
              if (x==3)
                y = 4'b1000;
              else
                y = 4'b0;
              end //}
endmodule*/

module dec_2x_4 (
  input [1:0]x,
  input e,
  output reg [3:0] y
  );
  
  always @(*) begin //{
        
        case ({e,x}) //{
          
          3'b100 : y = 4'b0001;
          3'b101 : y = 4'b0010;
          3'b110 : y = 4'b0100;
          3'b111 : y = 4'b1000;
          
          //default case
          3'b0?? : y = 4'b0;
        endcase //}
  end //}
  
endmodule
  
