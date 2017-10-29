#include "stdafx.h"
#include <iostream>

using namespace std;

int GetValidNumber()
{
	int number;
	bool valueIsCorrect = true;

	do
	{
		if (!valueIsCorrect)
		{
			cout << "Value is incorrect! It must be in the range of 0 to 255! Try again: ";
		}

		valueIsCorrect = false;
		cin >> number;

	} while (number < 0 || number > 255);

	return number;
}

int main()
{
	int octet1, octet2, octet3, octet4;

	cout << "Enter value of first octet: ";
	octet1 = GetValidNumber();
	cout << "Enter value of second octet: ";
	octet2 = GetValidNumber();
	cout << "Enter value of third octet: ";
	octet3 = GetValidNumber();
	cout << "Enter value of fourth octet: ";
	octet4 = GetValidNumber();

	cout << octet1 << "." << octet2 << "." << octet3 << "." << octet4 << endl;

	return 0;
}