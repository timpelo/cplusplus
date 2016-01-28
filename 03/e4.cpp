#include<iostream>
#include<cmath>

using namespace std;
void calcSquareRoot(float* a);

int main()
{
    float value = 4;
    calcSquareRoot(&value);
    
    cout << value << endl;
    
    return 0;
}

void calcSquareRoot(float* a)
{
    *a = *a * *a;
}