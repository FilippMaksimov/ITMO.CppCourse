#include <iostream>
#include <string>

using namespace std;

 void privet(string name)
{
	cout << name + ", " + "hello!\n";
}

void privet(string name, int k)
{
	cout << name << ", " << "hello! " << "you input " << k << endl;
}

int main()
{
	string name;
	int k;
	cout << "Input number:" << endl;
	cin >> k;
	cout << "What is your name?" << endl;
	cin >> name;
	privet(name);
	privet(name, k);
	return 0;
}