/*
void accumulate (int din[4],
                int &dout,
                bool &flag0,
                bool &flag1){
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
PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/mem_non_mutual_exclusive_manual.
cpp
*/