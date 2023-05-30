#include <iostream>
#include <Windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using Tuple = tuple<string, int, double>; // Вместо объявления typedef в псевдониме
using Tuple2 = tuple<string, double>;

void printTupleOfThree(Tuple);
Tuple funtup(string, int, double);
Tuple2 createNewTuple(string, int, double);
// typedef tuple<string, int, double> Tuple;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<string> v1 = { "one", "two", "three", "four", "five", "six" };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	auto t1 = funtup(v1[1], v2[1], v3[1]);
	auto t2 = createNewTuple(v1[2], v2[2], v3[3]);
	printTupleOfThree(t0);
	printTupleOfThree(t1);

	cout << "("
		<< get<0>(t2) << ", "
		<< get<1>(t2) << ")" << endl;

	return 0;
}

void printTupleOfThree(Tuple t)
{
	cout << "("
		<< get<0>(t) << ", "
		<< get<1>(t) << ", "
		<< get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
	s.append("!");
	return make_tuple(s, a, d*10);
}

Tuple2 createNewTuple(string s, int a, double d)
{
	s.append("?");
	return make_tuple(s, a + d);
}