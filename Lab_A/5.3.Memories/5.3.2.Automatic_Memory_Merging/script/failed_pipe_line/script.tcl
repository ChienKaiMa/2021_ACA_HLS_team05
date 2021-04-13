############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project project5.3.2
set_top accumulate4
add_files ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.1.Automatic_Mapping/src/AMAM.cpp
add_files ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.1.Automatic_Mapping/src/AMAM.h
add_files -tb ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.1.Automatic_Mapping/src/AMAMTester.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
source "./project5.3.2/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -rtl verilog -format ip_catalog
