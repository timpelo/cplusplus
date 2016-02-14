#include "shape.h"
#ifndef CIRCLE
#define CIRCLE

class Circle : public Shape
{

private:
    int radius_;

public:
    Circle(int x, int y, int radius);
    int CalcArea();
    int CalcCirc();
};

#endif