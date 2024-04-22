# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\91961\Desktop\embedded_lab\PSOC_EC32\Workspace01\combintional_lock.cydsn\combintional_lock.cyprj
# Date: Mon, 08 Apr 2024 11:20:54 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]


# Component constraints for C:\Users\91961\Desktop\embedded_lab\PSOC_EC32\Workspace01\combintional_lock.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\91961\Desktop\embedded_lab\PSOC_EC32\Workspace01\combintional_lock.cydsn\combintional_lock.cyprj
# Date: Mon, 08 Apr 2024 11:20:50 GMT
