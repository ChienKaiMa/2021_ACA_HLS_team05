############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "accumulate"
set_directive_interface -mode ap_memory "accumulate" din
set_directive_resource -core RAM_1P "accumulate" din
set_directive_interface -mode ap_fifo "accumulate" dout
