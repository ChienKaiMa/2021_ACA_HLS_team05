#include "cond_flush_manual.h"

void accumulate(int din[4],
                int &dout,
                bool &ack){
    int acc = 0;
    if (ack){
        ACCUM: for (int i = 0; i < 4; i++){
            acc += din[i];
        }
        dout = acc;
    }
}
// PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/cond_flush_manual.cpp
