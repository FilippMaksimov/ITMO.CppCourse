#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	int hr1, min1, sec1;
	cout << "Enter the first time: ";
	cin >> hr1; cin >> min1; cin >> sec1;
	try
	{
		const Time time1(hr1, min1, sec1);
		const Time time2(9, 25, 14);
		const Time time3 = time1.addTime(time2);
		cout << "The sum of first time (";
		time1.ShowTime();
		cout << ") and second time (";
		time2.ShowTime();
		cout << ") is ";
		time3.ShowTime();
		return 0;
	}
	catch (Time::ExValues& ex)
	{
		cout << "Error. " << ex.origin << endl;
		cout << "The fault value is " << ex.iValue << endl;
		return 1;
	}
}