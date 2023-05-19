#include <iostream>

using namespace std;


int sumFunction(int n)
{
	if (n == 1)
	{
		return 5;
	}
	else if (n > 1) 
	{
		return (5 + sumFunction(n - 1));
	}
	else
	{
		cout << "The number N must not be negative" << endl;
	}
}

int main()
{
	int n;
	cout << "S = 5 + 10 + 15 + ... + 5 x N" << "\n";
	cout << "Input a number N: "; cin >> n;
	int res = sumFunction(n);
	cout << "The result is " << res << endl;
	return 0;
}