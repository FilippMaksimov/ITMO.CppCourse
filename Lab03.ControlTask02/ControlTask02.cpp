#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double cubeRoot(double a, bool isFormula)
{
	double x, x1;
	x = a;
	while (true)
	{
		x1 = x;
		x = ((a / (x1 * x1)) + (2 * x1)) / 3;
		if (abs(x1 - x) < 1e-10)
		{
			break;
		}
	} 
	return x;
}

double cubeRoot(double a)
{
	return pow(a, 1.0 / 3);
}

int main()
{
	system("chcp 1251");
	bool isFormula = true;
	double a;
	cout << "а = "; cin >> a;
	double y1 = cubeRoot(a, isFormula);
	double y2 = cubeRoot(a);
	cout << "Вызвана функция с итерационной формулой. Кубический корень из а равен " << y1 << endl;
	cout << "Вызвана функция с вычислением из pow. Кубичекий корень из а равен " << y2 << endl;
	return 0;
}