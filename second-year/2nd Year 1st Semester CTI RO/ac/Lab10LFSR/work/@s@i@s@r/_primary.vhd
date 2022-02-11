library verilog;
use verilog.vl_types.all;
entity SISR is
    port(
        i               : in     vl_logic;
        clk             : in     vl_logic;
        rst_b           : in     vl_logic;
        set_b           : in     vl_logic;
        q               : out    vl_logic_vector(3 downto 0)
    );
end SISR;
