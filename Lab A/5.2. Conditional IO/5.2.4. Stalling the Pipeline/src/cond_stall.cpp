#include "cond_stall.h"

void accumulate4(int din[4],
                 int &dout){
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS INTERFACE ap_fifo port=din
#pragma HLS ARRAY_RESHAPE variable=din complete dim=1
#pragma HLS PIPELINE II=1
//#pragma HLS PIPELINE II=1 enable_flush
    int acc=0;
    ACCUM: for (int i=0; i<4; i++){
#pragma HLS UNROLL
        acc += din[i];
    }
    dout = acc;
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/cond_stall.cpp
