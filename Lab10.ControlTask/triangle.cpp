#include "triangle.h"
#include <math.h>
#include <iostream>

//Using Agregation
Triangle::Triangle(Dot* d1, Dot* d2, Dot* d3)
{
	Triangle::p1 = d1;
	Triangle::p2 = d2;
	Triangle::p3 = d3;
}
//Using Composition
Triangle::Triangle(double const x1, double const y1, double const x2, double const y2, double const x3, double const y3)
{
	Triangle::p1 = new Dot(x1, y1);
	Triangle::p2 = new Dot(x2, y2);
	Triangle::p3 = new Dot(x3, y3);
}
Triangle::~Triangle()
{
	delete Triangle::p1;
	delete Triangle::p2;
	delete Triangle::p3;
	delete Triangle::getSidesLength();
}
double* Triangle::getSidesLength() const
{
	double* sides = new double[3];
	sides[0] = Triangle::p1->distanceTo(*Triangle::p2);
	sides[1] = Triangle::p1->distanceTo(*Triangle::p3);
	sides[2] = Triangle::p2->distanceTo(*Triangle::p3);
	return sides;
}
double Triangle::trianglePerimeter() const
{
	return (Triangle::getSidesLength()[0] + Triangle::getSidesLength()[1] + Triangle::getSidesLength()[2]);
}
double Triangle::triangleSquare() const
{
	const double p = Triangle::trianglePerimeter() / 2;
	double s = sqrt(p * (p - Triangle::getSidesLength()[0]) * (p - Triangle::getSidesLength()[1]) * (p - Triangle::getSidesLength()[2]));
	return s;
}
