############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_unroll -factor 2 "accumulate4/ACCUM"
set_directive_interface -mode ap_memory "accumulate4" din
set_directive_interface -mode ap_fifo "accumulate4" dout
set_directive_resource -core RAM_1P "accumulate4" din
