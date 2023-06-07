#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	class NegativeValueError
	{
	private:
		string msg;
	public:
		NegativeValueError() : msg("������������ ��������") { }
		void printMessage() const { cout << msg << endl; }
	};
	// ����������� �� ���������
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	void getdist()
	{
		cout << "������� ����� ����� : ";
		cin >> feet;
		cout << "������� ����� ������ : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; //converting to feet
		feet = int(fltfeet); //an integer number of feet
		inches = 12 * (fltfeet - feet); // the residue from feet is inches;
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\'-" << dist.inches << "\"\n";
	return out;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Distance dist1 = 2.35F;
	Distance dist2;
	dist2.getdist();
	float mtrs;
	mtrs = static_cast<float>(dist1);
	cout << "�������� � ������ (����� ��������������) dist1: " << mtrs << endl;
	mtrs = dist2;
	cout << "�������� � ����� � ������ dist1: " << dist1 << endl;
	cout << "�������� � ������ (������� ��������������) dist2: " << mtrs << endl;
	return 0;
}