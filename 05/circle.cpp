#include <iostream>
#include "circle.h"
#include "shape.h"

using namespace std;

Circle::Circle(int x, int y, int radius) : Shape(x, y), radius_(radius)
{
    cout << "Circle created " << this << endl;
}

int Circle::CalcArea()
{
    return radius_*radius_*3.14;
}

int Circle::CalcCirc()
{
    return 2*3.14*radius_;
}