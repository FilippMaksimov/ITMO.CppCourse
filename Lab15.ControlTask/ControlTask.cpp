#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

struct StudentGrade
{
	string name;
	char grade;
}; 

void insert_grades(StudentGrade gr, map<string, char>& m)
{
	cout << "¬ведите им€ студента: ";
	getline(cin, gr.name);
	m.insert(pair<string, char>(gr.name, gr.grade));
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const char g1 = 'a';
	const char g2 = 'b';
	const char g3 = 'c';
	const char g4 = 'd';
	const char g5 = 'f';

	StudentGrade gr1;
	StudentGrade gr2;
	StudentGrade gr3;
	StudentGrade gr4;
	StudentGrade gr5;

	gr1.grade = g1;
	gr2.grade = g2;
	gr3.grade = g3;
	gr4.grade = g4;
	gr5.grade = g5;

	map<string, char> student_map;
	insert_grades(gr1, student_map);
	insert_grades(gr1, student_map);
	insert_grades(gr2, student_map);
	insert_grades(gr3, student_map);

	cout << "ќценки студентов";
	for (auto it = student_map.begin(); it != student_map.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	return 0;
}