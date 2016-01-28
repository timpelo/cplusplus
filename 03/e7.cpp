#include<iostream>

using namespace std;
void printAscii(int[], int length);

int main()
{
    int arrayLenght = 5;
    int array[] = {3, 4, 5, 5, 2};
    printAscii(array ,arrayLenght);
    
    return 0;
}


void printAscii(int array[], int length)
{
    for(int i = 0; i < length; i ++)
    {
        for(int b = 0; b < array[i]; b++) {
            cout << "#";
        }
        cout << endl;
    }
}