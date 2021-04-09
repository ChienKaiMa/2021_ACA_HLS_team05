#include <iostream>
#include "cond_flush_manual.h"
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

	bool ack_array[] = {
		true,
		true,
		false,
		false,
		false,
		true,
		true
	};

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
		if(ack_array[i])
			for(int j = 0; j < 4; j++)
				dout_gold += *(data_start + j);

		// invoke the DUT
		int dout;
		bool ack = ack_array[i];
		accumulate(data_start, dout, ack);

		// compare dout
		if(dout == dout_gold || (!ack_array[i])){
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
