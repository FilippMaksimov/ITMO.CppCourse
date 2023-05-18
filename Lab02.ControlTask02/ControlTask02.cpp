#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	regex reg("(\\d)");
	system("chcp 1251");
	string sn_id;
	int sum = 0;
	string res;
	cout << "Введите номер СНИЛС: ";
	getline(cin, sn_id);
	if (sn_id.length() > 9)
	{
		cout << "Введено больше 9 символов" << endl;
	}
	else if (sn_id.length() < 9)
	{
		cout << "Введено меньше 9 символов" << endl;
	}
	else
	{
		for (int i = 0; i < sn_id.length(); i++)
		{
			if (sn_id.substr(i, 1) == sn_id.substr(i + 1, 1) && sn_id.substr(i + 1, 1) == sn_id.substr(i + 2, 1))
			{
				cout << "Ошибка! Цифры не могут повторяться более 2 раз подряд" << endl;
				break;
			}
			else if(regex_match(sn_id.substr(i, 1), reg))
			{
				sum += stoi(sn_id.substr(i, 1));
			}
			else
			{
				cout << "Ошибка! Должны быть введены только числа" << endl;
				break;
			}
		}
		if (sum < 100)
		{
			res = to_string(sum);
		}
		else if (sum == 100 || sum == 101) 
		{
			res = "00";
		}
		else if (sum > 101)
		{
			if (sum % 101 < 100) 
			{
				res = to_string(sum % 101);
			}
			else
			{
				res = "00";
			}
		}
	}
	cout << "Контрольное число СНИЛС равно " << res << endl;
	return 0;
}