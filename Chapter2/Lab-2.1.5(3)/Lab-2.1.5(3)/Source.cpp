#include <iostream>
#include <iomanip>


using namespace std;

int main(void) {
	int sys;
	float m, ft, in;
	do {
		cout << "System of input data(0 - metric, 1 - imperal): ";
		cin >> sys;
	} while (sys < 0 || sys > 1);

	if (sys == 0) {
		cout << "Enter meters: ";
		cin >> m;

		in = m / 2.54E-2f; // only in inches
		ft = (int)in / 12; // calculate foots
		in = in - ft * 12; // calculate inches

		cout << ft << "'" << fixed << setprecision(5) << in << "''" << endl;
	}
	else if (sys == 1) {
		cout << "Enter feet: ";
		cin >> ft;

		cout << "Enter inches: ";
		cin >> in;

		m = (ft * 12 + in) * 2.54E-2f;
		cout << m << "m" << endl;
	}
	return 0;
}