#include <iostream>
#include <string>

using namespace std;

string binaryConvert(int n)
{
	if (n < 2)
	{
		return to_string(n);
	}
	else if (n > 2)
	{
		return binaryConvert(n / 2) + to_string(n % 2);
	}
}

int main()
{
	system("chcp 1251");
	int n;
	cout << "¬ведите число: "; cin >> n;
	string res = binaryConvert(n);
	cout << "–езультат в двоичном формате: " << res << endl;
	return 0;
}