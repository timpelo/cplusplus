#include <iostream>

using namespace std;

void emptyBoard(char** array, int height, int width);
void printBoard(char** array, int height, int width);

int main()
{

    cout << "Give width of gameboard:" << endl;
    int width = -1;

    while(width <= 0)
    {
        cin >> width;
    }

    cout << "Give height of gameboard:" << endl;
    int height = -1;

    while(height <= 0)
    {
        cin >> height;
    }

    char** array = new char*[height];

    for(int i = 0; i < height; i++)
    {
        array[i] = new char[width];
    }

    emptyBoard(array, height, width);
    printBoard(array, height, width);


}

void emptyBoard(char** array, int height, int width)
{
    for(int i = 0; i < height; i++)
    {
        char* subArray = array[i];

        for(int b = 0; b < width; b++)
        {
            subArray[b] = '-';
        }
    }

}

void printBoard(char** array, int height, int width)
{
    for(int i = 0; i < height; i++)
    {
        char* subArray = array[i];

        for(int b = 0; b < width; b++)
        {
            cout << subArray[b];
        }

        cout << endl;
    }
}