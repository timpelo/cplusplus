﻿#include<iostream>
#include "line.h"
#include "point.h"

using namespace std;

int main()
{
    int arraySize;

    cout << "Give size of array: " << endl;
    cin >> arraySize;

    Line* preCreatedLine = new Line(1, 1, 2, 2);
    Line** array = new Line*[arraySize];

    array[0] = preCreatedLine;

    preCreatedLine->Print();

    for(int i = 1; i < arraySize; i++)
    {
        int x1, y1, x2, y2;
        cout << "Give new line start x: " << endl;
        cin >> x1;
        cout << "Give new line start y: " << endl;
        cin >> y1;

        cout << "Give new line end x: " << endl;
        cin >> x2;
        cout << "Give new line end y: " << endl;
        cin >> y2;

        Line* createdLine = new Line(x1, y1, x2, y2);
        array[i] = createdLine;

    }

    for(int i = 0; i < arraySize; i++)
    {
        array[i]->Print();

    }


    return 0;
}