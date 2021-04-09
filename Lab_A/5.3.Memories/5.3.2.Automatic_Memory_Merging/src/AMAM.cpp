#include"AMAM.h"

void accumulate4(int din[4],
                int &dout){
    int acc=0;
    ACCUM:for (int i=0; i<4; i++){
        acc += din[i];
    }
    dout = acc;
}
