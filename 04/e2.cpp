#include <iostream>

using namespace std;


int main()
{

    cout << "How many chars you want to allocate fro memory?: ";
    int amount = -1;

    while(amount < 0)
    {
        cin >> amount;
    }

    char array[amount];

    for(int i = 0; i < amount; i++)
    {
        cout << "\nGive char number " << i+1 << ": ";
        cin >> array[i];
    }

    cout << "\nContent in the array:" << endl;
    for(int i = 0; i < amount; i++)
    {
        cout << array[i] << endl;
    }
}