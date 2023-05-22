#include <iostream>

using namespace std;

bool Input(int& a, int& b)
{
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int a, b;
	if (Input(a, b) == false)
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "s = a + b = " << s << endl;
	return 0;
}