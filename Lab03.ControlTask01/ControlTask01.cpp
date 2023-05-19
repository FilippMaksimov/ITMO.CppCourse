#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isValid(string sn_id)
{
	system("chcp 1251");
	regex reg("(\\d)");
	bool res = true;
	int digit_counter = 0;
	for (int i = 0; i < sn_id.length(); i++)
	{
		// Checking for digit repeating 
		if (sn_id.substr(i, 1) == sn_id.substr(i + 1, 1) && sn_id.substr(i + 1, 1) == sn_id.substr(i + 2, 1))
		{
			cout << "Ошибка! Цифры не могут повторяться более 2 раз подряд" << endl;
			res = false;
			break;
		}
		// Checking for symbols validating
		if (regex_match(sn_id.substr(i, 1), reg))
		{
			digit_counter++;
		}
		else if (sn_id.substr(i, 1) == " " || sn_id.substr(i, 1) == "-")
		{
			continue;
		}
		else
		{
			cout << "Ошибка! Некорректный номер СНИЛС!" << endl;
			digit_counter = 0;
			res = false;
			break;
		}
	}
	//Checking for digit numbers in a string 
	if (digit_counter == 9)
	{
		res = true;
	}
	else
	{
		cout << "В СНИЛС должно быть 9 чисел" << endl;
		res = false;
	}
	return res;
}

int main()
{
	regex reg("(\\d)");
	system("chcp 1251");
	string sn_id;
	int sum = 0;
	string res;
	cout << "Введите номер СНИЛС: ";
	getline(cin, sn_id);
	bool isCorrect = isValid(sn_id);
	if (isCorrect == true)
	{
		for (int i = 0; i < sn_id.length(); i++)
		{
			if (regex_match(sn_id.substr(i, 1), reg))
			{
				sum += stoi(sn_id.substr(i, 1));
			}
			else
			{
				continue;
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
		cout << "Контрольное число СНИЛС равно " << res << endl;
	}
	return 0;
}