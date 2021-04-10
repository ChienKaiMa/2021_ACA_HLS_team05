#include "throughput_limit_cond.h"

void accumulate (int din[4],
                int &dout,
                bool flag[4]) {
    int acc=0;
    int din_int[4];
    bool flag_int;
    FLAG:for (int i=0; i<4; i++)
        flag_int |= flag[i];
    DIN:for (int i=0; i<4; i++)
        if (flag_int)
            din_int[i] = din[i];
    ACCUM:for (int i=0; i<4; i++){
        if (flag[i])
            acc += din_int[i];
        else
            acc += 0;
    }
    dout = acc;
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/throughput_limit_cond.cpp
