#include "throughput_limit_unroll.h"

void accumulate (int din[4],
                int &dout,
                bool flag[4]){
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
