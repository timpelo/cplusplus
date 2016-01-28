#include<iostream>

using namespace std;
void doubleFunction(int& a);

int main()
{
    int value = 5;
    doubleFunction(value);
    cout << value << endl;
    
    
    return 0;
}


void doubleFunction(int& a)
{
    a = a*2;
}