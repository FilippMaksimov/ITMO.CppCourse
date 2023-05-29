#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

	ofstream out("Arrays.txt");
	if (out.is_open())
	{
		for (int i : a)
		{
			out << i << " ";
		}
	}
	else
	{
		cout << "Opening file failed";
		return 1;
	}

	out << "\n";

	int min = 0; // For the recording of min value
	int buf = 0; // For the buffering 
	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++)
		{
			min = (a[j] < a[min]) ? j : min;
		}
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
		out << a[i] << " ";
	}
	out.close();

	string line;
	ifstream in("Arrays.txt");
	if (in.is_open())
	{
		cout << "\nOuput text (reading mode):\n";
		while (getline(in, line))
		{
			cout << line << endl;
		}
	}
	else
	{
		cout << "File opening failed" << endl;
		return 1;
	}
	in.close();
	return 0;
}