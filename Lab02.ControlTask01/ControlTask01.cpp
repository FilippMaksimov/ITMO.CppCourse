#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int n;
	int order_nu = 1;
	cout << "������� �����:" << "\n";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		order_nu++;
	}
	if (n % 2 != 0 && order_nu % 2 != 0)
	{
		cout << "����� " << n << " �������� ������������" << endl;
	}
	else cout << "����� " << n << " �� �������� ������������";
	return 0;
}