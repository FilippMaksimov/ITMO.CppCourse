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

	Human *hum = new Student("������", "����", "����������", scores);
	hum->show_data();
	cout << '\n' << endl;

	unsigned int teacher_work_time = 40;
	hum = new Teacher("�������", "�������", "���������", teacher_work_time);
	hum->show_data();

	delete hum;

	return 0;
}