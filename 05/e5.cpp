#include "pixel.h"
#include <iostream>


using namespace std;

int main()
{

    Pixel* testPixel = new Pixel();
    testPixel->PrintColor();

    testPixel->SetX(5);
    testPixel->SetY(7);

    cout << testPixel->GetY() << " " << testPixel->GetX() << endl;

    delete testPixel;
}