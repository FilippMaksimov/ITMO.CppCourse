#include "time.h"
#include <string>
#include <cstdlib>
#include <iostream>

Time::Time() : Time::Time(0, 0, 0)
{}

Time::Time(int h, int m, int s)
{
	if (h < 0 || m < 0 || s < 0)
	{
		h = abs(h);
		m = abs(m);
		s = abs(s);
	}
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	Time::setHours(h);
	Time::setMinutes(m);
	Time::setSeconds(s);
}

void Time::setHours(const int h)
{
	Time::hours = h;
}

void Time::setMinutes(const int m)
{
	Time::minutes = m;
}

void Time::setSeconds(const int s)
{
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
	Time new_time(Time::hours + secondValue.hours, 
		Time::minutes + secondValue.minutes, 
		Time::seconds + secondValue.seconds);
	return new_time;
}

string Time::toTimeFormat(const int& val) const
{
	if (val < 10)
		return ("0" + std::to_string(val));
	else
		return (std::to_string(val));
}