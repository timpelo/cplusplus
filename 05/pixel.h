#include "point.h"
#ifndef PIXEL
#define PIXEL

class Pixel : public Point
{

private:
    int color;
   
public:
    Pixel();
    Pixel(int color, int x, int y);
    ~Pixel();
    int GetColor();
    void SetColor(int c);
    void PrintColor();
};

#endif