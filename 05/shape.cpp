#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape(int x, int y) : x_(x), y_(y)
{
    cout << "Shape created " << this << endl;
}

Shape::~Shape()
{
    cout << "Shape destroyed " << this << endl;
}

