#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	double a, b;
	string name;
	cout << "������� � � b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	// int x = a / b; // ������� �������������� �����
	cout.precision(3); // �������������� ���������� �� ���� �������� ����� �������
	cout << "\nx = " << x << endl;
	cout << "������, " << name << "!\n";
	cout << sizeof(a / b) << ends << " " << sizeof(x) << endl;
	return 0;
}