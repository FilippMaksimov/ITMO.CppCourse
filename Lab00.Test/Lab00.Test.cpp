// Lab00.Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <array>
#include <math.h>
#include <string>

// Task #1
class A
{
private:
    int* arr;
    int len;

public:
    A()
    { 
        len = 1;
        arr = new int[len];
        for (int i = 0; i < len; i++)
            arr[i] = 0;
    }
    A(int s)
    {
        len = s;
        arr = new int[len];
        for (int i = 0; i < len; i++)
            arr[i] = 0;
    }
    int size()
    {
        return len;
    }
    int& operator[](const int& i) const
    {
        return arr[i];
    }
};

//Task #3

class Point {
private:
    int x, y;
    double dst;
public:
    Point(): x(0), y(0), dst(0) {}
    Point(int f, int s): x(f), y(s) 
    {
        dst = sqrt(f * f + s * s);
    }
    double get_dist()
    {
        return dst;
    }
    Point operator+(const Point& p2) const
    {
        Point res_point;
        res_point.dst = this->dst + p2.dst;
        return res_point;
    }
    Point operator+=(const Point& p2)
    {
        dst += p2.dst;
        return (*this);
    }
    Point operator+(const double& d2) const
    {
        Point res_point;
        res_point.dst = this->dst + d2;
        return res_point;
    }
};


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    A a1;
    A a2(10); //10 – размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        std::cout << a4[i];
    }
    std::cout << "\nПривет, мир!\n";

    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    std::cout << "Distacne pt3 = pt1 + pt2 = " << pt3.get_dist() << std::endl;
    std::string p2 = std::to_string(pt2.get_dist());
    pt2 += pt1;
    std::cout << "Dustance pt2 = " << p2 << " + " << pt1.get_dist() << " = " << pt2.get_dist() << std::endl;
    pt3 = pt1 + 5;
    std::cout << "Distance pt1 = " << pt1.get_dist() << std::endl;
    std::cout << "Distacne pt3 = pt1 + 5 = " << pt3.get_dist() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
