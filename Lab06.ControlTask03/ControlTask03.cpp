#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <vector>

using json = nlohmann::json;

void writeToFile(int*, int);
void writeResToFile(int*, int);
int* getData(int&);

int main()
{
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	writeToFile(a, N);

	int len;
	int* b = getData(len);

	for (int i = 0; i < len; i++)
	{
		std::cout << b[i] << ' ';
	}
	std::cout << std::endl;

	int min = 0; // For the recording of min value
	int buf = 0; // For the buffering 
	for (int i = 0; i < len; i++)
	{
		min = i;
		for (int j = i + 1; j < len; j++)
		{
			min = (b[j] < b[min]) ? j : min;
		}
		if (i != min)
		{
			buf = b[i];
			b[i] = b[min];
			b[min] = buf;
		}
	}
	writeResToFile(b, len);
	delete[]b;

	std::ifstream in ("ArrayRes.json");
	json res;
	if (!in)
	{
		std::cout << "File opening failed" << std::endl;
		return 1;
	}
	in >> res;
	std::cout << res["sorted_array"] << std::endl;

	return 0;
}

void writeToFile(int* a, int n)
{
	json j;
	j["init_array"] = json::array();
	for (int i = 0; i < n; i++)
	{
		j["init_array"][i] = a[i];
	}
	std::ofstream out("Array.json");
	if (out.is_open())
		out << j << std::endl;
	else
		std::cout << "File opening failed" << std::endl;
	out.close();
}

void writeResToFile(int* a, int n)
{
	json j;
	j["sorted_array"] = json::array();
	for (int i = 0; i < n; i++)
	{
		j["sorted_array"][i] = a[i];
	}
	std::ofstream out("ArrayRes.json");
	if (out.is_open())
		out << j << std::endl;
	else
		std::cout << "File opening failed" << std::endl;
	out.close();
}

int* getData(int& len)
{
	json arr;
	std::ifstream in("Array.json");
	if (!in)
		std::cout << "File opening failed" << std::endl;
	in >> arr;
	len = arr["init_array"].size();
	int* new_array = new int[len];
	for (int i = 0; i < len; i++)
	{
		new_array[i] = arr["init_array"][i];
	}
	in.close();
	return new_array;
}