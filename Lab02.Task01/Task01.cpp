#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	// Упражнение 1. Задание 1
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y;
	cout << "Введите координаты точки (х, у)" <<":\n";
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
	{
		cout << "Точка внутри окружности" << endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		cout << "Точка вне окружности" << endl;
	}
	else
	{
		cout << "Точка на границе окружности" << endl;
	}


	// Упражнение 1. Задание 2
	char op;
	cout << "Сделай свой выбор, собери авто свой мечты: ";
	cin >> op;
	/*
	switch (op)
	{
	case 'S':
		cout << "Радио играть должно\n";
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
		break;
	case 'V':
		cout << "Кондиционер хочу\n";
		cout << "Радио играть должно\n";
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
		break;
	default:
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
	}
	*/
	switch (op)
	{
	case 'V':
		cout << "Кондиционер хочу\n";
	case 'S':
		cout << "Радио играть должно\n";
	default:
		cout << "Колеса круглые\n";
		cout << "Мощный двигатель\n";
	}
	return 0;
}