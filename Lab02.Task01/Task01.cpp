#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	// ���������� 1. ������� 1
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y;
	cout << "������� ���������� ����� (�, �)" <<":\n";
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
	{
		cout << "����� ������ ����������" << endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		cout << "����� ��� ����������" << endl;
	}
	else
	{
		cout << "����� �� ������� ����������" << endl;
	}


	// ���������� 1. ������� 2
	char op;
	cout << "������ ���� �����, ������ ���� ���� �����: ";
	cin >> op;
	/*
	switch (op)
	{
	case 'S':
		cout << "����� ������ ������\n";
		cout << "������ �������\n";
		cout << "������ ���������\n";
		break;
	case 'V':
		cout << "����������� ����\n";
		cout << "����� ������ ������\n";
		cout << "������ �������\n";
		cout << "������ ���������\n";
		break;
	default:
		cout << "������ �������\n";
		cout << "������ ���������\n";
	}
	*/
	switch (op)
	{
	case 'V':
		cout << "����������� ����\n";
	case 'S':
		cout << "����� ������ ������\n";
	default:
		cout << "������ �������\n";
		cout << "������ ���������\n";
	}
	return 0;
}