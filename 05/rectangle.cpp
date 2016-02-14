#include <iostream>
#include "rectangle.h"
#include "shape.h"

using namespace std;

Rectangle::Rectangle(int x, int y, int width, int height) : Shape(x, y), width_(width), height_(height)
{
    cout << "Rectangle created " << this << endl;
}

int Rectangle::CalcArea()
{
    return width_*height_;
}

int Rectangle::CalcCirc()
{
    return (2*width_) + (2*height_);
}