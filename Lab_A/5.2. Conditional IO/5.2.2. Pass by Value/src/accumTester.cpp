
#include <iostream>
#include "./cond_pass_by_value.h"

using namespace std;

int main(int argc, char *argv[])
{
	int din[3][4] = {
		{1, -10, 6, -7},
		{13, -7, 6, 0},
		{8, 3, 5, -4}
	};
	int golden_sum[3] = {-10, 6, 8};
	int dout = 0;
	int pass = 3;
	int threshold[3] = {1, 7, 12};
	bool flag[3] = {0, 1, 1};

	cout << ">> Start test!" << endl;

	for(int i = 0; i < 3; i++) {
		dout = 0;
		cout << "------------------------" << endl;
		accumulate(din[i], dout, threshold[i], flag[i]);
		cout << "threshold = " << threshold[i]
			<< ", " << "flag = " << flag[i] << "\n";
		cout << din[i][0] << " + " << din[i][1] << " + "
			<< din[i][2] << " + " << din[i][3]
			<< " = " << dout << endl;
		if(dout != golden_sum[i]) {
			--pass;
		}
	}

	cout << "------------------------" << endl;

	if(pass != 3) {
		cout << ">> Test failed!" << endl;
		return 1;
	}

	cout << ">> Test passed!" << endl;
	cout << "------------------------" << endl;
	return 0;
}
