#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

struct Equation
{
	double x1;
	double x2;
	void ShowResult()
	{
		if (x1 == x2)
		{
			if (x1 = x2 == NULL)
				cout << "D < 0. Решения нет" << endl;
			else
				cout << "x1 = x2 = " << x2 << endl;
		}
		else
			cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
	}
};

Equation squardFunc(double a, double b, double c)
{
	Equation res;
	double d = b * b - 4 * a * c;
	if (d == 0)
	{
		res.x1 = res.x2 = -b / (2 * a);
	}
	else if (d > 0)
	{
		res.x1 = (-b + sqrt(d)) / (2 * a);
		res.x2 = (-b - sqrt(d)) / (2 * a);
	}
	else if (d < 0)
	{
		res.x1 = res.x2 = NULL;
	}
	return res;
} 

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Equation res;
	double a, b, c;
	cout << "Уравнение A*(X^2) + B*X + C = 0\n" << "Введите А, В и С: ";
	cin >> a; cin >> b; cin >> c;
	res = squardFunc(a, b, c);
	res.ShowResult();
	return 0;
}