#include "triangle.h"
#include <iostream>

using namespace std;

int main()
{
	double x1, y1;
	double x2, y2;
	double x3, y3;
	cout << "Enter the coordinates of dots:" << endl;
	cout << "(x1, y1) = ";
	cin >> x1; cin >> y1;
	cout << "(x2, y2) = ";
	cin >> x2; cin >> y2;
	cout << "(x3, y3) = ";
	cin >> x3; cin >> y3;
	//Using agregation method
	Dot* d1 = new Dot(x1, y1);
	Dot* d2 = new Dot(x2, y2);
	Dot* d3 = new Dot(x3, y3);
	Triangle* tr1 = new Triangle(d1, d2, d3);
	cout << "Using agregation method..." << "\nThe square of triangle is " << tr1->triangleSquare() << endl;
	delete tr1;
	//Using composition method
	Triangle* tr2 = new Triangle(x1, y1, x2, y2, x3, y3);
	cout << "\nUsing composition nethod..." << "\nThe square of triangle is " << tr2->triangleSquare() << endl;
	delete tr2;
	return 0;
}