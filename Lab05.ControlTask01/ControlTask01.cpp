#include <iostream>

using namespace std;

int getTotal(int, int[]);
void getSum(int, int[], int&, int&);
void getOddAndEven(int, int[], int&, int&);
void getMaxAndMin(int, int[], int&, int&, int&, int&);

int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}

	int neg_s, pos_s;
	int even_s, odd_s; 
	int v_max, v_min;
	int i_min, i_max;

	//Using functions 
	int s = getTotal(n, mas);
	getSum(n, mas, neg_s, pos_s);
	getOddAndEven(n, mas, odd_s, even_s);
	getMaxAndMin(n, mas, v_max, v_min, i_max, i_min);

	double av = s / n;
	cout << "Total: " << s << endl;
	cout << "Avarage: " << av << endl;
	cout << "The sum of negative values: " << neg_s << endl;
	cout << "The sum of possitive values: " << pos_s << endl;
	cout << "The sum of items with even indexes: " << even_s << endl;
	cout << "The sum of items with odd indexes: " << odd_s << endl;
	cout << "The max value is " << v_max << " with index of " << i_max << endl;
	cout << "the min value is " << v_min << " with index of " << i_min << endl;
}

int getTotal(int n, int a[])
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
	}
	return s;
}

void getSum(int n, int a[], int& neg_s, int& pos_s)
{
	neg_s = 0;
	pos_s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			neg_s += a[i];
		}
		else
		{
			pos_s += a[i];
		}
	}
}

void getOddAndEven(int n, int a[], int& odd_s, int& even_s)
{
	even_s = 0;
	odd_s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			odd_s += a[i];
		}
		else
		{
			even_s += a[i];
		}
	}
}

void getMaxAndMin(int n, int a[], int& v_max, int& v_min, int& i_max, int& i_min)
{
	v_max = a[0];
	v_min = a[0];
	i_min = 0;
	i_max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > v_max)
		{
			v_max = a[i];
			i_max = i;
		}
		else if (a[i] < v_min)
		{
			v_min = a[i];
			i_min = i;
		}
	}
}