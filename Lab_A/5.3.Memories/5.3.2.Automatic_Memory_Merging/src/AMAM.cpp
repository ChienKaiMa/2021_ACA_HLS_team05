#include"AMAM.h"

void accumulate4(int din[4],
                int &dout){
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS RESOURCE variable=din core=RAM_1P
    int acc=0;
    ACCUM:for (int i=0; i<4; i++){
#pragma HLS UNROLL factor=2
        acc += din[i];
    }
    dout = acc;
}
