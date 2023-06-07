#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	int hr1, min1, sec1;
	cout << "Enter first time: ";
	cin >> hr1; cin >> min1; cin >> sec1;
	try
	{
		const Time time1(hr1, min1, sec1);
		const Time time2(9, 25, 14);
		Time time3 = time1 + time2;
		Time time4 = time1 - time2;
		cout << "\nThe sum of the first time (" << time1 << ") and the second time ("
			<< time2 << ") is " << time3 << endl;
		cout << "The difference between the first time (" << time1 << ") and the second time ("
			<< time2 << ") is " << time4 << endl;

		if (time3 > time2)
			cout << time3 << " is greater than " << time2 << endl;
		else
			cout << time3 << " is smaller than " << time2 << endl;

		Time time5 = 15.65;
		double t_d = time5;
		cout << time5 << " implicitly converted to double value of " << t_d << endl;

		const double i_e = 1.55;
		const double i_f = 2.765;
		Time time6 = time1 + i_e;
		Time time7 = i_f + time1;
		cout << time1 << " + " << i_e << " = " << time6 << endl;
		cout << i_f << " + " << time1 << " = " << time7 << endl;

		return 0;
	}
	catch (Time::ExValues& ex)
	{
		cout << "Error. " << ex.origin << endl;
		cout << "The fault value is " << ex.iValue << endl;
		return 1;
	}
}