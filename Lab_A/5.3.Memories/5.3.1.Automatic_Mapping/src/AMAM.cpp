#include"AMAM.h"

void accumulate4(int din[4],
                int &dout){
#pragma HLS ARRAY_RESHAPE variable=din cyclic factor=2 dim=1
#pragma HLS RESOURCE variable=din core=RAM_1P
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS PIPELINE II=1
    int acc=0;
    ACCUM:for (int i=0; i<4; i++){
        acc += din[i];
    }
    dout = acc;
}
