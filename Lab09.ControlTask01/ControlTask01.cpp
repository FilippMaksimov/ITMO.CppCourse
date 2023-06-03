#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Triangle
{
public:
	class ExValues
	{
	public:
		string origin;
		double iValue;
		ExValues(string org, double sc)
		{
			origin = org;
			iValue = sc;
		}
	};
	Triangle(double a, double b, double c)
	{
		if ((a > b + c) || (b > a + c) || (c > a + b)) 
		{
			double inv = a > b + c ? a : b > a + c ? b : c > a + b ? c : 0;
			throw ExValues("Invalid value of side in triangle", inv);
		}
		firstValue = a;
		secondValue = b;
		thirdValue = c;
	}
	double SquareCalc() const 
	{
		const double p = (firstValue + secondValue + thirdValue) / 2;
		double s = sqrt(p * (p - firstValue) * (p - secondValue) * (p - thirdValue));
		return s;
	}
private:
	double firstValue;
	double secondValue;
	double thirdValue;
};
int main()
{
	double a, b, c;
	cout << "Enter any sides of triangle: ";
	cin >> a; cin >> b; cin >> c;
	try
	{
		Triangle tr1(a, b, c);
		double s = tr1.SquareCalc();
		cout << "The square of triangle with sides " << a << ", " << b << " and " << c << " is " << s << endl;
		//Checking exception block 
		cout << "\nChecking for propper error block operation" << endl;
		Triangle tr2(2, 1, 6);
		double s2 = tr2.SquareCalc();
	}
	catch (Triangle::ExValues& ex)
	{
		cout << ex.origin << endl;
		cout << "The value of side (" << ex.iValue << ") is greater than the sum of others" << endl;
		return 1;
	}
	return 0;
}