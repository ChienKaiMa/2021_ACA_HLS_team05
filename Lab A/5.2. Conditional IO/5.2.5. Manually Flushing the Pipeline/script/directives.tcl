############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "accumulate"
set_directive_interface -mode ap_fifo "accumulate" din
set_directive_interface -mode ap_fifo "accumulate" dout
set_directive_interface -mode ap_none "accumulate" ack
set_directive_unroll "accumulate/ACCUM"
set_directive_array_reshape -type complete -dim 1 "accumulate" din
