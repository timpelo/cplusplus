#include<iostream>

using namespace std;

int main()
{
    int array[5];
    
    for(int i = 0; i < 5; i ++)
    {
        cout << "\nGive integer number: ";
        cin >> array[i];
    }
    
     for(int i = 0; i < 5; i ++)
    {
        cout << *(array+i) << endl;
    }
    
    return 0;
}