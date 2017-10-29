#include <iostream>

using namespace std;

int main()
{
	int numberOne, numberTwo;
	float epsilon = 0.000001f;
	bool isEqual;

	cout << "Enter first number: ";
	cin >> numberOne;

	cout << "Enter second number: ";
	cin >> numberTwo;

	isEqual = fabs(1.0 / (float)numberOne - 1.0 / (float)numberTwo) < epsilon;

	cout << "Values are " << (isEqual ? "" : "not ") << "equal. (Epsilon: " << epsilon << ")" << endl;

	system("pause");
	return 0;
}