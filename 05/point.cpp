#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;

    cout << "Point created" << this << endl;
}
Point::Point() : x(0), y(0)
{
    cout << "Point created" << this << endl;
}

Point::~Point()
{
    cout << "Point destroyed" << this << endl;
}

int Point::GetY()
{
    return y;
}

int Point::GetX()
{
    return x;
}

void Point::SetX(int x)
{
    this->x = x;
}

void Point::SetY(int y)
{
    this->y = y;
}