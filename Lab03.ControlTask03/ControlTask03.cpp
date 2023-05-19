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
	cout << "�������� ��� ������������ (������� ����� ��������, ��������� ����): " << "\n";
	cout << "1.    �������������� �����������" << "\n";
	cout << "2.    �������������� �����������" << "\n";
	cin >> op;
	switch (op)
	{
	case '1':
		cout << "������� �������� ������� �������������� ������������ � = "; cin >> a;
		s = triangleSquare(a);
		break;
	case '2':
		cout << "������� �������� ������ ������� ��������������� ������������ � = "; cin >> a;
		cout << "������� �������� ������ ������� ��������������� ������������ b = "; cin >> b;
		cout << "������� �������� ������� ������� ��������������� ������������ c = "; cin >> c;
		s = triangleSquare(a, b, c);
		break;
	default:
		cout << "������ �������������� �������. ���������� ��� ���" << endl;
	}
	cout << "������� ����� " << s << endl;
	return 0;
}