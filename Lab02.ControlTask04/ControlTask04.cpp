#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	srand(time(NULL));
	int score = 0;
	int x, y;
	int x_target, y_target;
	int counter = 0;
	int bingo = 0;
	string rank_lev;
	// Min � Max �������� ������������ ������
	int min_v = 0;
	int max_v = 5;
	// Min � Max �������� ����������� ��� ��������
	int min_dev = 0;
	int max_dev = 1;
	//����� ������
	x_target = min_v + rand() % (max_v - min_v + 1);
	y_target = min_v + rand() % (max_v - min_v + 1);
	//���������� ���������� ��������� ����������� ��� �������� 
	int x_dev;
	int y_dev;
	int formula;
	while (score <= 50)
	{
		cout << "������� " << counter << ". ������� ���������� (�, �): ";
		cin >> x;
		cin >> y;
		x_dev = min_dev + rand() % (max_dev - min_dev + 1);
		y_dev = min_dev + rand() % (max_dev - min_dev + 1);
		formula = (x - x_target + x_dev) * (x - x_target + x_dev) + (y - y_target + y_dev) * (y - y_target + y_dev);
		if (formula <= 9)
		{
			if (formula <= 4)
			{
				if (formula <= 1)
				{
					score += 10;
					bingo++;
					cout << "10 �����!" << "\n";
				}
				else
				{
					score += 5;
					bingo++;
					cout << "5 �����" << "\n";
				}
			}
			else 
			{
				score += 1;
				bingo++;
				cout << "1 ����" << "\n";
			}
		}
		else
		{
			score += 0;
			cout << "������:( ���������� ��� ���" << "\n";
		}
		counter++;
	}
	//������� �������
	if ((bingo / counter) >= 0.45)
	{
		if ((bingo / counter) >= 0.75)
		{
			rank_lev = "�������";
		}
		else
		{
			rank_lev = "�������";
		}
	}
	else
	{
		rank_lev = "�������";
	}
	cout << "\t" << "����� ���������     " << "\t" << counter << endl;
	cout << "\t" << "���������� ���������" << "\t" << bingo << endl;
	cout << "\t" << "������� �������     " << "\t" << rank_lev << endl;
	return 0;
}