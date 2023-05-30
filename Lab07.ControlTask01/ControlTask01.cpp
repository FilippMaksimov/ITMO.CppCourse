#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
	void ShowTime()
	{
		string h = to_string(hours);
		string m = to_string(minutes);
		string s = to_string(seconds);
		if (hours < 10)
			h.insert(h.begin(), '0');
		if (minutes < 10)
			m.insert(m.begin(), '0');
		if (seconds < 10)
			s.insert(s.begin(), '0');
		cout << h << ':' << m << ':' << s << endl;
	}
};

Time InputTime()
{
	Time t;
	cout << "¬ведите врем€: " << endl;
	cin >> t.hours;
	cin >> t.minutes;
	cin >> t.seconds;
	while (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	while (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}

	if (t.hours < 0 || t.minutes < 0 || t.seconds < 0)
	{
		t.hours = abs(t.hours);
		t.minutes = abs(t.minutes);
		t.seconds = abs(t.seconds);
	}
	return t;
}

Time AddTime(Time t1, Time t2)
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	t.seconds = t1.seconds + t2.seconds;
	if (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	if (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	return t;
}

Time SubtractTime(Time t1, Time t2)
{
	Time t;
	if (t1.hours < t2.hours && t1.minutes < t2.minutes && t1.seconds < t2.seconds)
	{
		int buffer = 0;
		buffer = t1.hours;
		t1.hours = t2.hours;
		t2.hours = buffer; 

		buffer = t1.minutes;
		t1.minutes = t2.minutes;
		t2.minutes = buffer;

		buffer = t1.seconds;
		t1.seconds = t2.seconds;
		t2.seconds = buffer;
	}
	t.hours = t1.hours - t2.hours;
	t.minutes = t1.minutes - t2.minutes;
	t.seconds = t1.seconds - t2.seconds;
	if (t.seconds < 0)
	{
		t.seconds = 60 + t.seconds;
		t.minutes--;
	}
	if (t.minutes < 0)
	{
		t.minutes = 60 + t.minutes;
		t.hours--;
	}
	return t;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Time t1 = InputTime();
	Time t2 = InputTime();
	Time t_add = AddTime(t1, t2);
	Time t_sub = SubtractTime(t1, t2);
	t_add.ShowTime();
	t_sub.ShowTime();
	return 0;
}