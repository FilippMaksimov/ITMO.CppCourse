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
	Time(double);
	void setHours(const int);
	void setMinutes(const int);
	void setSeconds(const int);
	void ShowTime() const;
	Time addTime(const Time&) const;
	Time operator+(const Time&) const;
	Time operator+(const double&) const;
	Time operator-(const Time&) const;
	friend std::ostream& operator<< (std::ostream& out, const Time& t);
	bool operator<(const Time&) const;
	bool operator>(const Time&) const;
	operator double() const;
private:
	int hours;
	int minutes;
	int seconds;
	string toTimeFormat(const int&) const;
};
