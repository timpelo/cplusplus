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
    
    Line* line2 = new Line(*line);
    
    line->SetLine(10,10,10,10);
    line2->Print();

    return 0;
}