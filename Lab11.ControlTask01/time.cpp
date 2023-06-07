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

Time::Time(double t_double)
{
	hours = int(t_double);
	minutes = int((t_double - hours) * 60);
	seconds = int((((t_double - hours) * 60) - minutes) * 60);
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

Time Time::addTime(const Time& secondValue) const
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

Time Time::operator+(const Time& t2) const
{
	int h, m, s;
	h = Time::hours + t2.hours;
	m = Time::minutes + t2.minutes;
	s = Time::seconds + t2.seconds;
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

Time Time::operator+(const double& t_double) const
{
	Time t2 = t_double;
	int h, m, s;
	h = Time::hours + t2.hours;
	m = Time::minutes + t2.minutes;
	s = Time::seconds + t2.seconds;
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

Time Time::operator-(const Time& t2) const
{
	int h, m, s;
	h = Time::hours - t2.hours;
	m = Time::minutes - t2.minutes;
	s = Time::seconds - t2.seconds;
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
			s += 60;
			m--;
		case 'm':
			if (m < 0)
			{
				m += 60;
				h--;
			}
		default:
			if (h < 0)
				h += 24;
		}
		Time new_time2(h, m, s);
		return new_time2;
	}
}

std::ostream& operator<< (std::ostream& out, const Time& t)
{
	out << t.toTimeFormat(t.hours) << ':'
		<< t.toTimeFormat(t.minutes) << ':'
		<< t.toTimeFormat(t.seconds);
	return out;
}

bool Time::operator<(const Time& t) const
{
	double t_sum1 = static_cast<double>(Time::hours) + (static_cast<double>(Time::minutes) / 60) + (static_cast<double>(Time::seconds) / 3600);
	double t_sum2 = static_cast<double>(t.hours) + (static_cast<double>(t.minutes) / 60) + (static_cast<double>(t.seconds) / 3600);
	return (t_sum1 < t_sum2) ? true : false;
}

bool Time::operator>(const Time& t) const
{
	double t_sum1 = static_cast<double>(Time::hours) + (static_cast<double>(Time::minutes) / 60) + (static_cast<double>(Time::seconds) / 3600);
	double t_sum2 = static_cast<double>(t.hours) + (static_cast<double>(t.minutes) / 60) + (static_cast<double>(t.seconds) / 3600);
	return (t_sum1 > t_sum2) ? true : false;
}

Time::operator double() const
{
	double sum = static_cast<double>(Time::hours);
	sum += static_cast<double>(Time::minutes) / 60;
	sum += static_cast<double>(Time::seconds) / 3600;
	return sum;
}