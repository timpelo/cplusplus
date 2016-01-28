#include<iostream>

using namespace std;
void increaseValues(int[], int length);

int main()
{
    int arrayLenght = 5;
    int array[] = {1, 2, 3, 4, 5};
    increaseValues(array ,arrayLenght);
    
    for(int i = 0; i < arrayLenght; i ++)
    {
        cout << array[i] << endl;
    }
    
    
    return 0;
}


void increaseValues(int array[], int length)
{
    for(int i = 0; i < length; i ++)
    {
        array[i]++;
    }
}