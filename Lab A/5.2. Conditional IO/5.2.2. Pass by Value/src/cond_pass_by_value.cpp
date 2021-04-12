// Original PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/cond_pass_by_value.cpp
// Modified for Vivado HLS by Chien-Kai Ma

#include "./cond_pass_by_value.h"

void accumulate(int din[4],
                int &dout,
                int threshold,
                bool flag ) {
#pragma HLS INTERFACE ap_none port=flag
#pragma HLS INTERFACE ap_ovld port=threshold
#pragma HLS INTERFACE ap_ovld port=dout
#pragma HLS INTERFACE ap_fifo port=din name=din
    int acc=0;
    ACCUM:for (int i=0; i<4; i++) {
#pragma HLS PIPELINE II=1
        acc += din[i];
        if (flag)
            if (acc > threshold)
                acc = threshold;
    }
    dout = acc;
}
