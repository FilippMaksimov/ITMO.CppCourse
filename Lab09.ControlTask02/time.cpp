#include "time.h"
#include <string>
#include <cstdlib>
#include <iostream>

Time::ExValues::ExValues(string org, int sc, char err)
{
	ExValues::origin = org;
	ExValues::iValue = sc;
	ExValues::errorId = err;
}

Time::Time() : Time::Time(0, 0, 0)
{}

Time::Time(int h, int m, int s)
{
	Time::setSeconds(s);
	Time::setMinutes(m);
	Time::setHours(h);
}

void Time::setHours(const int h)
{
	if ((h >= 24) || (h < 0))
		throw Time::ExValues::ExValues("Incorrect value at setHours()", h, 'h');
	Time::hours = h;
}

void Time::setMinutes(const int m)
{
	if ((m >= 60) || (m < 0))
		throw Time::ExValues::ExValues("incorrect value at setMinutes()", m, 'm');
	Time::minutes = m;
}

void Time::setSeconds(const int s)
{
	if ((s >= 60) || (s < 0))
		throw Time::ExValues::ExValues("incorrect value at setSeconds()", s, 's');
	Time::seconds = s;
}

void Time::ShowTime() const
{
	std::cout << Time::toTimeFormat(Time::hours) << ':'
		<< Time::toTimeFormat(Time::minutes) << ':'
		<< Time::toTimeFormat(Time::seconds);
}

Time Time::addTime(const Time secondValue) const
{
	int h, m, s;
	h = Time::hours + secondValue.hours;
	m = Time::minutes + secondValue.minutes;
	s = Time::seconds + secondValue.seconds;
	try
	{
		Time new_time(h, m, s);
		return new_time;
	}
	catch (Time::ExValues& ex)
	{
		switch (ex.errorId)
		{
		case 's':
			s -= 60;
			m++;
		case 'm':
			if (m >= 60)
			{
				m -= 60;
				h++;
			}
		default:
			if (h >= 24)
				h -= 24;
		}
		Time new_time2(h, m, s);
		return new_time2;
	}
}

string Time::toTimeFormat(const int& val) const
{
	if (val < 10)
		return ("0" + std::to_string(val));
	else
		return (std::to_string(val));
}