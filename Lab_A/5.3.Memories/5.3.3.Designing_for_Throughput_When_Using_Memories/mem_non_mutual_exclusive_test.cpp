#include<stdio.h>
#include "mem_non_mutual_exclusive.h"

int main(){
	int din[4][4] = {
				{1,2,4,8},
				{16,32,64,128},
				{256,512,1024,2048},
				{4096,8192,16384,32768}
		};
		int out = 0;
		bool pass = true;
		bool flag0[4] = {1,0,1,0};
		bool flag1[4] = {0,1,0,1};
		for(int i = 0;i<4;i++){
			out = 0;
			accumulate(din[i], out, flag0[i], flag1[i]);
			int expect_out = 0;
			for (int j=0; j<4; j++){
			        if (flag0[i])
			            expect_out += din[i][j];
			        if (flag1[i])
			            expect_out -= din[i][j]/2;
			}
			if(out != expect_out){
				pass = false;
			}
			printf("%d\n", out);
		}

		// 0 is pass, so !pass => !true => false => 0
		return !pass;

}
