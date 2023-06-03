#pragma once
#include <string>
#include <iostream>

using namespace std;
class Time
{
public:
	class ExValues
	{
	public:
		string origin;
		int iValue;
		char errorId;
		ExValues(string, int, char);
	};
	Time();
	Time(int, int, int);
	void setHours(const int);
	void setMinutes(const int);
	void setSeconds(const int);
	void ShowTime() const;
	Time addTime(Time) const;
private:
	int hours;
	int minutes;
	int seconds;
	string toTimeFormat(const int&) const;
};