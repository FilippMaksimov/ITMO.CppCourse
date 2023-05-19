#include <iostream>

using namespace std;

// Ecercise 1
int addNumders(int n)
{
	if (n == 1) return 1;
	else return (n + addNumders(n - 1));
}

int addNumbers(int n_start, int n_end)
{
	if (n_end == n_start) return n_start;
	else return (n_end + addNumbers(n_start, n_end-1));
}

// Exercise 2
int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int main()
{
	// 1
	int n;
	int n_start, n_end;
	cout << "Input number: "; cin >> n;
	int res1 = addNumders(n);
	cout << "The summ of numbers from 1 to " << n << " is " << res1 << endl;
	cout << "Input the interval of numbers: ";
	cin >> n_start;
	cin >> n_end;
	int res2 = addNumbers(n_start, n_end);
	cout << "The summ of numbers from " << n_start << " to " << n_end << " is " << res2 << endl;
	// 2
	int a, b;
	cout << "Input the first number: "; cin >> a;
	cout << "Input the second number: "; cin >> b;
	int res3 = gcd(a, b);
	cout << "The greatest common divisor of " << a << " and " << b << " is " << res3 << endl;
	return 0;
}

