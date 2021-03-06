#ifndef POINT
#define POINT

class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y);
    Point();
    virtual ~Point();
    int GetX();
    int GetY();
    void SetY(int y);
    void SetX(int x);
    virtual void Print();
};

#endif