#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	short int n;
	float value = 1;

	do {
		cout << "Enter n: ";
		cin >> n;
	} while (n < 0);

	for (short i = 0; i < n; i++) {
		value /= 2;
	}

	cout.precision(20);
	cout << "The value is: " << value << endl;

	return 0;
}