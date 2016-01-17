#include <iostream>

using namespace std;

int main() {
	cout << "Give number: \n";
	int number = 0;
	cin >> number;
	while(number < 1 || number > 25) 
	{
		cout << "Give number from 1 to 25.\n";
		cout << "Give number: \n";
		cin >> number;
	}
	number = number - 1;
	
	char alphabetics[] = "abcdefghijklmnopqrstuvxyz";
	int arraySize = 25;

	for( int i = 0; i < arraySize; i = i + 1)
	{
		if(i == number)
		{
			cout << "\"";
			cout << alphabetics[i];
			cout << "\"";
		} else {
			cout << alphabetics[i];
		}
	}
	
	return 0;
}