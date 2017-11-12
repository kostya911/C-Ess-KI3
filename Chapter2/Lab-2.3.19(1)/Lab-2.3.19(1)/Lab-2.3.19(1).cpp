#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned c0, steps = 0;

	do
	{
		cout << "Enter c0 (c0 > 0): ";
		cin >> c0;
	} while (!c0);

	do
	{
		if (c0 % 2) {
			c0 = 3 * c0 + 1;
		}
		else {
			c0 = c0 / 2;
		}

		cout << c0 << endl;
		steps += 1;
	} while (c0 != 1);

	cout << "Number of steps: " << steps << endl;

	return 0;
}