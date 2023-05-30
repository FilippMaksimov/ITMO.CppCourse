#include <iostream>
#include <Windows.h>
#include <math.h>
#include <tuple>

using Tuple = std::tuple<int, double, double>;

Tuple squardFunc(double a, double b, double c)
{
	int n = 0;
	double x1, x2 = 0;
	double d = b * b - 4 * a * c;
	if (d == 0)
	{
		x1 = x2 = -b / (2 * a);
		n = 1;
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		n = 2;
	}
	return std::make_tuple(n, x1, x2);
}

void ShowResult(Tuple t)
{
	switch (std::get<0>(t))
	{
	case 1:
		std::cout << "x1 = x2 = " << std::get<1>(t) << std::endl;
		break;
	case 2:
		std::cout << "x1 = " << std::get<1>(t) << "; x2 = " << std::get<2>(t) << std::endl;
		break;
	default:
		std::cout << "D < 0. Решения нет" << std::endl;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, b, c;
	std::cout << "Уравнение A*(X^2) + B*X + C = 0\n" << "Введите А, В и С: ";
	std::cin >> a; std::cin >> b; std::cin >> c;
	auto res = squardFunc(a, b, c);
	ShowResult(res);
	return 0;
}