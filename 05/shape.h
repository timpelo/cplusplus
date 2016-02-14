#include <iostream>
#ifndef SHAPE
#define SHAPE

class Shape
{

private:
    int x_;
    int y_;
    
public:
    Shape(int x, int y);
    ~Shape();
    virtual int CalcArea() = 0;
    virtual int CalcCirc() = 0;
};

#endif