#include "throughput_limit_uncond.h"

void accumulate (int din[4],
                int &dout,
                bool flag[4]) {
#pragma HLS ARRAY_RESHAPE variable=din complete dim=1
#pragma HLS INTERFACE ap_fifo port=din
#pragma HLS ARRAY_RESHAPE variable=flag complete dim=1
#pragma HLS INTERFACE ap_fifo port=flag
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE ap_fifo port=dout
    int acc=0;
    int din_int[4];
    bool flag_int;
    DIN: for (int i=0; i<4; i++)
#pragma HLS UNROLL
    	din_int[i] = din[i];
    ACCUM: for (int i=0; i<4; i++){
#pragma HLS UNROLL
        if (flag[i])
            acc += din_int[i];
    }
    dout = acc;
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/throughput_limit_uncond.cpp
