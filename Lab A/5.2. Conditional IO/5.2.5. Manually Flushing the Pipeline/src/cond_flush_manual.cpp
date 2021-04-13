#include "cond_flush_manual.h"

void accumulate(int din[4],
                int &dout,
                bool &ack){
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE ap_none port=ack
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS ARRAY_RESHAPE variable=din complete dim=1
#pragma HLS INTERFACE ap_fifo port=din
    int acc = 0;
    if (ack){
        ACCUM: for (int i = 0; i < 4; i++){
#pragma HLS UNROLL
            acc += din[i];
        }
        dout = acc;
    }
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/cond_flush_manual.cpp
