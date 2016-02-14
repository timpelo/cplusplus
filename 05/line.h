#include "point.h"
#ifndef LINE
#define LINE

class Line
{

private:
    Point* start;
    Point* end;

public:
    Line(Point* start, Point* end);
    Line(int x1, int y1, int x2, int y2);
    Line(const Line& c);
    ~Line();
    void SetLine(int x1, int y1, int x2, int y2);
    void Print();
};

#endif