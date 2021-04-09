#include "AMAM.h"
#include<stdio.h>

int main(int argc, char *argv[])
{
	int din[3][4] = {
			{1,2,4,8},
			{16,32,64,128},
			{256,512,1024,2048},
			//{4096,8192,16384,32768}
	};
	int out = 0;
	bool pass = true;
	for(int i = 0;i<3;i++){
		out = 0;
		accumulate4(din[i], out);
		int expect_out = 0;
		for(int j = 0;j<4;j++){
			expect_out +=din[i][j];
		}
		if(out != expect_out){
			pass = false;
		}
		printf("%d\n", out);
	}

	// 0 is pass, so !pass => !true => false => 0
	return !pass;

}
