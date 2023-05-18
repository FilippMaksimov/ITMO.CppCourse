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
	// Min и Max значения расположения мишени
	int min_v = 0;
	int max_v = 5;
	// Min и Max значения погрешности при стрельбе
	int min_dev = 0;
	int max_dev = 1;
	//Центр мишени
	x_target = min_v + rand() % (max_v - min_v + 1);
	y_target = min_v + rand() % (max_v - min_v + 1);
	//Объявление переменных координат погрешности при стрельбе 
	int x_dev;
	int y_dev;
	int formula;
	while (score <= 50)
	{
		cout << "Выстрел " << counter << ". Введите координаты (х, у): ";
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
					cout << "10 очков!" << "\n";
				}
				else
				{
					score += 5;
					bingo++;
					cout << "5 очков" << "\n";
				}
			}
			else 
			{
				score += 1;
				bingo++;
				cout << "1 очко" << "\n";
			}
		}
		else
		{
			score += 0;
			cout << "Промах:( Попробуйте еще раз" << "\n";
		}
		counter++;
	}
	//Уровень стрелка
	if ((bingo / counter) >= 0.45)
	{
		if ((bingo / counter) >= 0.75)
		{
			rank_lev = "Снайпер";
		}
		else
		{
			rank_lev = "Стрелок";
		}
	}
	else
	{
		rank_lev = "Новичок";
	}
	cout << "\t" << "Всего выстрелов     " << "\t" << counter << endl;
	cout << "\t" << "Количество попаданий" << "\t" << bingo << endl;
	cout << "\t" << "Уровень стрелка     " << "\t" << rank_lev << endl;
	return 0;
}