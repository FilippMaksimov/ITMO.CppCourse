#include <iostream>
#include <math.h>

using namespace std;

double triangleSquare(double a)
{
	return ((pow(3, 1 / 3) * a * a) / 4);
}

double triangleSquare(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	system("chcp 1251");
	double a, b, c; 
	double s = 0;
	char op;
	cout << "Выберите тип треугольника (введите номер варианта, указанный ниже): " << "\n";
	cout << "1.    Равносторонний треугольник" << "\n";
	cout << "2.    Разносторонний треугольник" << "\n";
	cin >> op;
	switch (op)
	{
	case '1':
		cout << "Введите величину стороны равносторннего треугольника а = "; cin >> a;
		s = triangleSquare(a);
		break;
	case '2':
		cout << "Введите величину первой стороны разностороннего треугольника а = "; cin >> a;
		cout << "Введите величину второй стороны разностороннего треугольника b = "; cin >> b;
		cout << "Введите величину третьей стороны разностороннего треугольника c = "; cin >> c;
		s = triangleSquare(a, b, c);
		break;
	default:
		cout << "Выбран несуществующий вариант. Попробуйте еще раз" << endl;
	}
	cout << "Площадь равна " << s << endl;
	return 0;
}