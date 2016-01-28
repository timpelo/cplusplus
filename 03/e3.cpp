#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int array[5][5];
    
    for(int i = 0; i < 5; i++)
    {
        for(int b = 0; b < 5; b++)
        {
            array[i][b] = rand() % 9 + 0;
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int b = 0; b < 5; b++)
        {
            cout << array[i][b];
        }
        cout << endl;
    }
    
    return 0;
}