#include <iostream>
#include "line.h"
#include "point.h"

using namespace std;

Line::Line(Point* start, Point* end): start(start), end(end)
{
    cout << "Line created" << this << endl;
}

Line::Line(int x1, int y1, int x2, int y2)
{
    start = new Point(x1, y1);
    end = new Point(x2, y2);

    cout << "Line created" << this << endl;

}

Line::Line(const Line &c)
{
    delete start;
    delete end;

    int x1, y1, x2, y2;
    x1 = c.start->GetX();
    y1 = c.start->GetY();
    x2 = c.end->GetX();
    y2 = c.end->GetY();

    start = new Point(x1, y1);
    end = new Point(x2, y2);

}

Line::~Line()
{
    delete start;
    delete end;
    cout << "Line destroyed" << this << endl;
}

void Line::SetLine(int x1, int y1, int x2, int y2)
{

    delete start;
    delete end;

    start = new Point(x1, y1);
    end = new Point(x2, y2);
}

void Line::Print()
{
    cout << "Line " << this << endl;

    cout << "Start: " << start->GetX() << " ";
    cout << start->GetY() << endl;

    cout << "End: " << end->GetX() << " ";
    cout << end->GetY() << endl;
}