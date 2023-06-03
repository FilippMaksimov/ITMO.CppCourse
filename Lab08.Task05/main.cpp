#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
	// —оздание объекта класса Student
	string name;
	string last_name;
	// ¬вод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// ¬вод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// ќценки
	int scores[5];
	// —умма всех оценок
	int sum = 0;
	// ¬вод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}

	Student* student02 = new Student(name, last_name);
	student02->set_scores(scores);
	double average_score = sum / 5.0;
	student02->set_average_score(average_score);
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	delete student02;

	return 0;
}