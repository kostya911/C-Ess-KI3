#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short n;
	float value = 1;

	do {
		cout << "Enter n (n <= 63): ";
		cin >> n;
	} while (n > 63);

	for (unsigned short i = 0; i < n; i++) {
		value *= 2;
	}

	cout.precision(0);
	cout << fixed << "Result is: " << value << endl;

	return 0;
}