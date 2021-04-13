#include "throughput_limit.h"

void accumulate (int din[4],
                 int &dout,
                 bool flag[4]) {
#pragma HLS ARRAY_RESHAPE variable=flag complete dim=1
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS INTERFACE ap_fifo port=flag
#pragma HLS INTERFACE ap_fifo port=dout
    int acc=0;
    ACCUM: for (int i=0; i<4; i++){
#pragma HLS UNROLL
        if (flag[i])
            acc += din[i];
    }
    dout = acc;
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/throughput_limit.cpp
