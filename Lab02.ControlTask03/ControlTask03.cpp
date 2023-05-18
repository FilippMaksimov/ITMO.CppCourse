#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int sum;
	cout << "Введите сумму, которую нужно разменять: "; cin >> sum;
	while (sum >= 10)
	{
		sum -= 10;
		a1++;
	}
	while (sum >= 5)
	{
		sum -= 5;
		a2++;
	}
	while (sum >= 2) 
	{
		sum -= 2;
		a3++;
	}
	while (sum >= 1)
	{
		sum -= 1;
		a4++;
	}
	cout << "\tНоминал монет\tКоличество\n";
	cout << "\t" << "10 рублей" << "\t" << a1 << endl;
	cout << "\t" << "5 рублей " << "\t" << a2 << endl;
	cout << "\t" << "2 рубля  " << "\t" << a3 << endl;
	cout << "\t" << "1 рубль  " << "\t" << a4 << endl;
	return 0;
}