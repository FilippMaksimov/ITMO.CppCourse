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
	cout << "������� ����� �����: ";
	getline(cin, sn_id);
	if (sn_id.length() > 9)
	{
		cout << "������� ������ 9 ��������" << endl;
	}
	else if (sn_id.length() < 9)
	{
		cout << "������� ������ 9 ��������" << endl;
	}
	else
	{
		for (int i = 0; i < sn_id.length(); i++)
		{
			if (sn_id.substr(i, 1) == sn_id.substr(i + 1, 1) && sn_id.substr(i + 1, 1) == sn_id.substr(i + 2, 1))
			{
				cout << "������! ����� �� ����� ����������� ����� 2 ��� ������" << endl;
				break;
			}
			else if(regex_match(sn_id.substr(i, 1), reg))
			{
				sum += stoi(sn_id.substr(i, 1));
			}
			else
			{
				cout << "������! ������ ���� ������� ������ �����" << endl;
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
	cout << "����������� ����� ����� ����� " << res << endl;
	return 0;
}