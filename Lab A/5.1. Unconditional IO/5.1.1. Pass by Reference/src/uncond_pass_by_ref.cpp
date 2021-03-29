/*
void accumulate(int din[4],
                int &dout,
                int &threshold,
                bool &flag ) {
    int acc=0;
    ACCUM:for (int i=0; i<4; i++) {
        acc += din[i];
        if (flag)
            if (acc > threshold)
                acc = threshold;
    }
    dout = acc;
}
//PATH: $MGC_HOME/shared/examples/docs/bluebook/schedule/uncond_pass_by_ref.cpp
*/