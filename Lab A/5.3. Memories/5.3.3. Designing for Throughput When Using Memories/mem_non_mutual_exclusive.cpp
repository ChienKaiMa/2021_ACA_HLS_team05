/*
void accumulate (int din[4],
                int &dout,
                bool &flag0,
                bool &flag1){
    int acc=0;
    ACCUM:for (int i=0; i<4; i++){
        if (flag0)
            acc += din[i];
        if (flag1)
            acc -= din[i]/2;
    }
    dout = acc;
}
PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/mem_non_mutual_exclusive.cpp
*/