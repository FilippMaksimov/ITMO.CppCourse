#include <iostream>

using namespace std;

int transSearch(int*, int, int);

int main()
{
	const int N = 10;
	int my_array[N] = { 1, -1, 2, 3, 4, 12, 6, 7, 11, 13 };
	int key;
	cout << "Current array:" << "\n";
	for (int item : my_array)
		cout << item << '\t';
	cout << "\nEnter the key (value): "; cin >> key;
	int idx1 = transSearch(my_array, N, key);
	int idx2 = transSearch(my_array, N, key);
	if (idx1 == -1 || idx2 == -1)
	{
		cout << "The key " << key << " has not been found" << endl;
	}
	else
	{
		cout << "First search. The index of key " << key << " is " << idx1 << endl;
		cout << "Second search. The index of key " << key << " is " << idx2 << endl;
	}
	cout << "The array having been transposed:" << "\n";
	for (int item : my_array)
		cout << item << '\t';
	return 0;
}

int transSearch(int* arr, int n, int key)
{
	int exc;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			if (i == 0) return i;
			exc = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = exc;
			return i;
		}
	}
	return -1;
}