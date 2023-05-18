#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	double a, b;
	string name;
	cout << "Введите а и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	// int x = a / b; // Неявное преобразование типов
	cout.precision(3); // Форматирование результата до трех разрядов после запятой
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	cout << sizeof(a / b) << ends << " " << sizeof(x) << endl;
	return 0;
}