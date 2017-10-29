#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float value1 = 2.3, value2 = value1, value3 = 2.123456, value4 = value3, value5 = value3;

	cout << fixed << setprecision(1) << value1 << endl;
	cout << setprecision(2) << value2 << endl;
	cout << setprecision(6) << value3 << endl;
	cout << setprecision(2) << value4 << endl;
	cout << setprecision(0) << value5 << endl;

	system("pause");
	return 0;
}