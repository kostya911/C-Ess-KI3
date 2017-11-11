#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year, monthNumber, dayNumber, weekDay;
	bool dayIsCorrect;

	do
	{
		cout << "Enter year (1900-2100): ";
		cin >> year;
	} while (year < 1900 || year > 2100);

	do
	{
		cout << "Enter month number (1-12): ";
		cin >> monthNumber;
	} while (monthNumber < 1 || monthNumber > 12);

	do
	{
		cout << "Day number(1-31): ";
		cin >> dayNumber;
	} while (dayNumber < 1 || dayNumber > 31);

	monthNumber -= 2;

	if (monthNumber < 0) {
		monthNumber += 12;
		year -= 1;
	}

	monthNumber *= 83;
	monthNumber /= 32;
	monthNumber += dayNumber + year + year / 4;
	monthNumber -= year / 100;
	monthNumber += year / 400;
	weekDay = monthNumber % 7;

	cout << "Week day: " << weekDay;

	return 0;
}