#include "shape.h"
#ifndef RECTANGLE
#define RECTANGLE

class Rectangle : public Shape
{

private:
    int width_;
    int height_;

public:
    Rectangle(int x, int y, int width, int height);
    int CalcArea();
    int CalcCirc();
};

#endif