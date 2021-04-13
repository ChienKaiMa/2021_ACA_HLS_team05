#include "throughput_limit_unroll.h"

void accumulate (int din[4],
                int &dout,
                bool flag[4]){
#pragma HLS ARRAY_RESHAPE variable=flag complete dim=1
#pragma HLS INTERFACE ap_fifo port=flag
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS INTERFACE ap_fifo port=dout
    int acc=0;
    if (flag[0])
        acc += din[0];
    if (flag[1])
        acc += din[1];
    if (flag[2])
        acc += din[2];
    if (flag[3])
        acc += din[3];
    
    dout = acc;
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/throughput_limit_unroll.cpp
