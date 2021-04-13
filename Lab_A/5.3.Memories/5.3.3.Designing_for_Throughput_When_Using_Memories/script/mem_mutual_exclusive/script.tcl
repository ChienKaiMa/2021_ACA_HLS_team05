############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project project5.3.3.2
set_top accumulate
add_files ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.3.Designing_for_Throughput_When_Using_Memories/src/mem_mutual_exclusive.h
add_files ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.3.Designing_for_Throughput_When_Using_Memories/src/mem_mutual_exclusive.cpp
add_files -tb ../github/2021_ACA_HLS_team05/Lab_A/5.3.Memories/5.3.3.Designing_for_Throughput_When_Using_Memories/src/mem_mutual_exclusive_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
source "./project5.3.3.2/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
