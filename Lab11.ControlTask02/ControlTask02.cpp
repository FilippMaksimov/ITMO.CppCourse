#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std; 

class Point
{
private:
	int x;
	int y;
public:
	Point() : x(0), y(0) { }
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	double getDistanceToCenter()
	{
		return sqrt(x * x + y * y);
	}
	friend std::ostream& operator<<(std::ostream& out, Point& p);
	bool operator<(Point&);
};

std::ostream& operator<<(std::ostream& out, Point& p)
{
	out << "x = " << p.x << " y = " << p.y << " distance: " << p.getDistanceToCenter();
	return out;
}

bool Point::operator<(Point& p)
{
	return (getDistanceToCenter() < p.getDistanceToCenter()) ? true : false;
}

int main()
{
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end());
	for (auto& point : v)
		std::cout << point << '\n';
	return 0;
}