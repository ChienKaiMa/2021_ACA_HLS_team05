#include <iostream>
#include "throughput_limit_cond.h"
using namespace std;

int main(int argc, char *argv[]) {
	int data[] = {
		2,  5,  3, -5,
		1,  6,  5, -9,
	   -7,  6, -9,  2,
		6,  7, -6, -1,
	   -6,  2,  1,  8,
	   -8,  0,  5,  5,
		4, -9,  5, -7
	};

	bool flag[4] = {1, 0, 1, 1};
	bool flag0[4] = {0, 0, 0, 0};

	bool passed_all = true;
	int N = sizeof(data) / sizeof(int) / 4;
	cout << "N=" << N << endl;
	for(int i = 0; i < N; i++) {

		// pointer to start of data array
		int *data_start = data + i * 4;
		cout << "------------------------" << endl;
		cout << "din: ";
		for(int j = 0; j < 4; j++)
			cout << *(data_start + j) << ", ";
		cout << endl;

		// reference output
		int dout_gold = 0;
		if(i == 3)
			dout_gold = 0;
		else
			for(int j = 0; j < 4; j++)
				if(flag[j])
					dout_gold += *(data_start + j);

		// invoke the DUT
		int dout;
		if(i == 3)
			accumulate(data_start, dout, flag0);
		else
			accumulate(data_start, dout, flag);

		// compare dout
		if(dout == dout_gold){
			cout << "Passed" << endl;
		}
		else{
			cout << "Failed" << endl;
			cout << "Expected: " << dout_gold << endl;
			cout << "DUT:      " << dout << endl;
			passed_all = false;
		}
	}

	cout << "------------------------" << endl;
	if(passed_all){
		cout << "All passed!" << endl;
		return 0;
	}
	else{
		cout << "Something failed." << endl;
		return 1;
	}
}
