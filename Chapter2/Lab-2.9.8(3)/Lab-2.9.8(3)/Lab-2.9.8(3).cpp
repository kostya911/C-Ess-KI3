#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int vector[] = {-1, 7, 3, 8, 9, 8, 3, 7, -1};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
	
	int i = 0;
	while(i < n/2 && ispalindrome)
	{
		if(vector[i] !=vector[n-i-1])
			ispalindrome = false;
		i++;
	}

	if(ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	system("pause");
	return 0;
}