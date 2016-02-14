#include <iostream>
#include "point.h"
#include "pixel.h"

using namespace std;

Pixel::Pixel() : Point(0,0), color(0)
{
    cout << "Pixel created " << this << endl;
}

Pixel::Pixel(int color, int x, int y) : Point(x, y), color(color)
{
    cout << "Pixel created " << this << endl;
}

Pixel::~Pixel()
{
    cout << "Pixel destroyed " << this << endl;
}

int Pixel::GetColor()
{
    return color;
}

void Pixel::SetColor(int c)
{
    color = c;
}

void Pixel::PrintColor()
{
    cout << color << endl;
}