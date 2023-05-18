#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int x1, x2, x3, x4, x5;
	int y1, y2, y3, y4, y5;
	cout << "Расчёт площади пятиугольника\n" << "Введите значение (х1, y1):" << "\n";
	cin >> x1;
	cin >> y1;
	cout << "Введите значение (х2, y2):" << "\n";
	cin >> x2;
	cin >> y2;
	cout << "Введите значение (х3, y3):" << "\n";
	cin >> x3;
	cin >> y3;
	cout << "Введите значение (х4, y4):" << "\n";
	cin >> x4;
	cin >> y4;
	cout << "Введите значение (х5, y5):" << "\n";
	cin >> x5;
	cin >> y5;
	double s = 0.5 * (x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
	if (s < 0)
	{
		s = (-1) * s;
	}
	cout << "Площадь пятиугольника равна: " << s << endl;
	return 0;
}