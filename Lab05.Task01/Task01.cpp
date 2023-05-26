#include <iostream>

using namespace std;
int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}
	int s = 0;
	int neg_s = 0; //The sum of negative values of items in array
	int pos_s = 0; //The sum of possitive values of irems in array
	int even_s = 0; //The sum of itemes in array having even indexes 
	int odd_s = 0; //The sum of items in array having odd indexes 

	int v_max = mas[0];
	int v_min = mas[0];
	int i_min = 0;
	int i_max = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			neg_s += mas[i];
		}
		else
		{
			pos_s += mas[i];
		}

		if (i % 2 == 0)
		{
			odd_s += mas[i];
		}
		else
		{
			even_s += mas[i];
		}
		s += mas[i];
		
		if (mas[i] > v_max)
		{
			v_max = mas[i];
			i_max = i;
		}
		else if (mas[i] < v_min)
		{
			v_min = mas[i];
			i_min = i;
		}
	}
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