#pragma once
#include "dot.h"
#include <math.h>
#include <iostream>

class Triangle
{
private:
	Dot* p1;
	Dot* p2;
	Dot* p3;
public:
	Triangle(Dot*, Dot*,Dot*);
	Triangle(double const, double const, double const, double const, double const, double const);
	~Triangle();
	double* getSidesLength() const;
	double trianglePerimeter() const;
	double triangleSquare() const;
};
