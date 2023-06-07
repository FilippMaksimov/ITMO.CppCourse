#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* stud = new Student("Петров", "Иван", "Алексеевич", scores);
	cout << stud->get_full_name() << endl;
	cout << "Средний балл: " << stud->get_average_score() << endl;

	unsigned int teacher_work_time = 40;
	Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич",
		teacher_work_time);
	cout << tch->get_full_name() << endl;
	cout << "Количество часов: " << tch->get_work_time() << endl;

	return 0;
}