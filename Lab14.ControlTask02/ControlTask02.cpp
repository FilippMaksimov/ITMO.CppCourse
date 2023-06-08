#include <iostream>
#include <vector>

using namespace std;

template<class T, class N>
void Print(vector<T> v, N s)
{
	for (auto it = v.begin(); it!=v.end(); it++)
	{
		if (it != v.begin())
			cout << s;
		cout << *it;
	}
}

int main() {
	std::vector<int> data = { 1, 2, 3 };
	Print(data, ", "); // на экране: 1, 2, 3
}

