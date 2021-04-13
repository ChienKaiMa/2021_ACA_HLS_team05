#include"mem_mutual_exclusive.h"

void accumulate(int din[4],
                int &dout, bool
                &flag0, bool
                &flag1){
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS RESOURCE variable=din core=RAM_1P
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS PIPELINE II=1
    int acc=0;
    ACCUM:for (int i=0; i<4; i++){
        if (flag0)
            acc += din[i];
        else if (flag1)
            acc -= din[i]/2;
    }
    dout = acc;
}
