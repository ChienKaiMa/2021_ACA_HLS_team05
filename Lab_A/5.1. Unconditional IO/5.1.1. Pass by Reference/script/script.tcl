############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project exp_IO
set_top accumulate
add_files exp_IO/uncond_pass_by_ref.cpp
add_files -tb exp_IO/accumTester.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 20 -name default
#source "./exp_IO/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
