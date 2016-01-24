#include <iostream>

using namespace std;

int main()
{

    int value1 = 1;
    int value2 = 2;
    int value3 = 3;
    
    int* pointerArray[3];
    
    pointerArray[0] = &value1;
    pointerArray[1] = &value2;
    pointerArray[2] = &value3;
    
    for(int i = 0; i < 3; i++)
    {
        cout << pointerArray[i] << endl;
        cout << *pointerArray[i] << endl;
    }
}