#include <iostream>
#include <string>
#include "student.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	// �������� ������� ������ Student
	string name;
	string last_name;
	IdCard *idc = new IdCard(123, "�������");
	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	Student* student01 = new Student(name, last_name, idc);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ��������� ������������� ������ � ������ ������ Student
	student01->set_scores(scores);
	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student01->set_average_score(average_score);
	// ������� ������ �� ��������
	cout << "Average ball for " << student01->get_name() << " "
		<< student01->get_last_name() << " is "
		<< student01->get_average_score() << endl;
	cout << "IdCard: " << student01->getIdCard().getNumber() << endl;
	cout << "Category: " << student01->getIdCard().getCategory() << endl;
	delete idc;
	delete student01;
	return 0;
}