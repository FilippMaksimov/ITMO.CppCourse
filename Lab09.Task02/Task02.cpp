#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class DivideByZeroError
{
public:
	DivideByZeroError() : message("Деление на нуль") { }
	void printMessage() const { cout << message << endl; }
private:
	string message;
};

float quotient(int num1, int num2)
{
	if (num2 == 0)
		throw DivideByZeroError();
	return (float)num1 / num2;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите целое число:\n";
	int number1;
	cin >> number1;
	for (int i = -10; i < 10; i++)
	{
		try
		{
			float result = quotient(number1, i);
			cout << "Частное равно " << result << endl;
		}
		catch (DivideByZeroError& error)
		{
			cout << "ОШИБКА: ";
			error.printMessage();
		}
	}
	return 0;
}