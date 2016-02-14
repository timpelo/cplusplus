#include <iostream>
#include "point.h"
#include "line.h"

using namespace std;

int main()
{
    Point* start = new Point(5,6);
    Point* end = new Point(8,9);
    
    Line* line = new Line(start, end);
    line->Print();
    
    Line* line2 = new Line(1,2,3,4);
    line2->Print();

    return 0;
}