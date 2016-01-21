#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand( time(NULL));
	int randNum = rand() % 10 + 1;
	int userNum;
	
	
	cout << "Random number is generated. Try to guess it (1 - 10): ";
	cin >> userNum;
	
	while( userNum != randNum )
	{
		if( userNum > randNum )
		{
			cout << "Random number is smaller.";
		}
		
		if( userNum < randNum )
		{
			cout << "Randon number is bigger.";
		}
		
		cout << "\nGuess a number: ";
		cin >> userNum;
	}
	
	cout << "Correct! Random number was " << randNum;
	
	return 0;
}