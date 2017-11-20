#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);
	int *p1 = vector, *p2 = p1+1;
	for(int i = 1; i < n; i++)
	{
		if(*p1 < *p2)
			p2++;
		else {
			p1 = p2;
			p2++;
		}
	}
	cout << *p1;
		system("pause");
	return 0;
}
