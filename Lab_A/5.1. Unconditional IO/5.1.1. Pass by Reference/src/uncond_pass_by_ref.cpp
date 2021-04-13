// Original PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/uncond_pass_by_ref.cpp
// Modified for Vivado HLS by Chien-Kai Ma

#include "./uncond_pass_by_ref.h"

void accumulate(int din[4],
                int &dout,
				int &threshold,
				bool &flag ) {
#pragma HLS INTERFACE ap_none port=flag
#pragma HLS INTERFACE ap_none port=threshold
#pragma HLS INTERFACE ap_none port=dout
#pragma HLS INTERFACE ap_fifo port=din
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
