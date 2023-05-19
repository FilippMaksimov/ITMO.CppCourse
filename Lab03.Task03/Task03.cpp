#include <iostream>

using namespace std;

long double firBinSearch(double a, int n)
{
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}

int main()
{
	system("chcp 1251");
	cout.precision(6);
	double a;
	int n;
	double res;
	cout << "Введите действительное число a = "; cin >> a;
	cout << "Введите степень n = "; cin >> n;
	if ((n <= 10) && (a >= 1 && a <= 1000))
	{
		res = firBinSearch(a, n);
		cout << "Корень степени " << n << " из числа " << a << " равен " << res << endl;
	}
	return 0;
}