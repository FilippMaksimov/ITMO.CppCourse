#include <iostream>

using namespace std;

void swap(int*, int*);
void swap(int&, int&);

int main()
{
	int x = 5, y = 10;
	swap(&x, &y);
	cout << x << "\t" << y << endl;
	swap(x, y);
	cout << x << "\t" << y << endl;
	return 0;
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}