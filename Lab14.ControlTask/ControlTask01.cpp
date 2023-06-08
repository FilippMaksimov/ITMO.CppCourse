#include <iostream>

using namespace std;

template<class T>
double getAverage(T* arr, int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}

template<class T, size_t N> 
constexpr size_t len(const T(&arr)[N]) noexcept
{
	return N;
}

int main()
{
	int arr_int[] = {1, 2, 3, 4, 5};
	long arr_long[] = { 1, 10, 100, 1000, 2457, 954 };
	double arr_double[] = { 2.5, 3.7, 8.9, 15.7, 19.1, 25.8, 28.6 };
	char arr_char[] = "Hello world";

	double av_int = getAverage(arr_int, len(arr_int));
	double av_long = getAverage(arr_long, len(arr_long));
	double av_double = getAverage(arr_double, len(arr_double));
	double av_char = getAverage(arr_char, len(arr_char)-1);

	cout << av_int << "\n"
		<< av_long << "\n"
		<< av_double << "\n"
		<< av_char << endl;

	return 0;
}