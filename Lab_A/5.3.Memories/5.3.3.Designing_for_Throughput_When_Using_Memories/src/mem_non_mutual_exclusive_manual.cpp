#include "mem_non_mutual_exclusive_manual.h"

void accumulate (int din[4],
                int &dout,
                bool &flag0,
                bool &flag1){
#pragma HLS INTERFACE ap_fifo port=dout
#pragma HLS INTERFACE ap_memory port=din
#pragma HLS RESOURCE variable=din core=RAM_1P
#pragma HLS PIPELINE II=1
    int acc=0;
    int tmp;
    ACCUM:for (int i=0; i<4; i++){
        tmp = din[i];
        if (flag0)
            acc += tmp;
        if (flag1)
            acc -= tmp/2;
    }
    dout = acc;
}
