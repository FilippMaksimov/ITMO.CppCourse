#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// ���������� ������� ��������������� ������������
	system("chcp 1251");
	cout.precision(2);
	double p;
	cout << "������� �������� ��������� ��������������� ������������:\n";
	cin >> p;
	double s = sqrt(p / 2 * (p / 2 - p / 3) * (p / 2 - p / 3) * (p / 2 - p / 3));
	printf("---------------------\n");
	printf("| C������ | ������� |\n");
	printf("---------------------\n");
	printf("|  %5.2f  |  %5.2f  |\n", p / 3, s);
	printf("---------------------\n");
	return 0;
}