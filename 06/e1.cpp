#include <iostream>
#include "point.h"
#include "pixel.h"

using namespace std;

int main()
{

    Point* array[4];

    array[0] = new Point(5, 5);
    array[1] = new Pixel(10, 5, 5);
    array[2] = new Point(7, 7);
    array[3] = new Pixel(10, 5, 5);

    for(int i = 0; i < 4; i++)
    {
        array[i]->Print();

        // This won't compile. The reason is that array may contain
        // objects which inheritance from Point. This makes that only
        // methods of Point object can be used.

        //array[i]->PrintColor();

        delete array[i];
    }
    
    return 0;
}