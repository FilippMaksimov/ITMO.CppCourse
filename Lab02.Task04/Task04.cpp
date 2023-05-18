#include <iostream>

using namespace std;

int main() 
{
	int m, k;
	int s = 0;
	cout << "m = "; cin >> m;
	cout << "k = "; cin >> k;
	for (int i = 1; i <= 100;i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	cout << "\n" << s << endl;
	return 0;
}