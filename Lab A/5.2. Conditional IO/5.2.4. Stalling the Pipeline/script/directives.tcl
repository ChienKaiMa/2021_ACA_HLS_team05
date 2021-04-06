############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "accumulate4"
set_directive_interface -mode ap_fifo "accumulate4" din
set_directive_array_reshape -type complete -dim 1 "accumulate4" din
set_directive_interface -mode ap_fifo "accumulate4" dout
set_directive_unroll "accumulate4/ACCUM"
