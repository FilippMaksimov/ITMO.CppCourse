#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// Writing 
	system("chcp 1251");
	const int n = 255;
	char txt[n];
	cout << "Enter the text:\n";
	cin.get(txt, n, '&');
	ofstream out("Poetry.txt");
	if (out.is_open())
	{
		out << txt << endl;
	}
	else
	{
		cout << "File opening failed" << endl;
		return 1;
	}
	out.close();

	// Reading 
	char buffer[50];
	ifstream in("Poetry.txt");
	if (in.is_open())
	{
		cout << "\nOuput text (reading mode):\n";
		while (!in.eof())
		{
			in.getline(buffer, 50);
			cout << buffer << endl;
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