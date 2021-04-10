############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Example48
set_top accumulate
add_files Example48/throughput_limit.cpp
add_files Example48/throughput_limit.h
add_files -tb Example48/throughput_limit_test.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 7.5 -name default
source "./Example48/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
