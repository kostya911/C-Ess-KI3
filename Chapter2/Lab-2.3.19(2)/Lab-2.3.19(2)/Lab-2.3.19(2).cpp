#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {

	double pi4 = 0.;
	unsigned long n;

	do {
		cout << "Number of iterations (n > 0): ";
		cin >> n;
	} while (!n);

	for (unsigned long i = 0; i < n; i++) {

		pi4 += pow(-1, i) / (2 * i + 1);
	}

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}