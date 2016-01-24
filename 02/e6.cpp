#include <iostream>

using namespace std;

int main()
{

    int value;
    int* pointer = &value;

    value = 10;

    cout << *pointer << endl;
    cout << pointer << endl;
}