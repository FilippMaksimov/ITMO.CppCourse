#include <iostream>
#include <math.h>

using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
	system("chcp 1251");
	double a, b, c;
	double x1, x2;
	cout << "Квадратное уравнение: A*x^2 +B*x + C = 0" << "\n";
	cout << "Введите значение А: "; cin >> a;
	cout << "Введите значение B: "; cin >> b;
	cout << "Введите значение C: "; cin >> c;
	switch (Myroot(a, b, c, x1, x2))
	{
	case 0:
		cout << "Корень уравнения один: x1 = x2 = " << x2 << endl;;
		break;
	case 1:
		cout << "Корни уравнения: х1 = " << x1 << ", x2 = " << x2 << endl;
		break;
	default:
		cout << "Корней уравнения нет" << endl;
	}
	return 0;
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double d = b * b - 4 * a * c;
	if (d < 0)
	{
		return -1;
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 1;
	}
}