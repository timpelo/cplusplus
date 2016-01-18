#include <iostream>

using namespace std;

int main() {
	cout << "Hello stranger. What is your name?\n";
	cout << "Enter your name: ";
	
	char name[50];
	cin >> name;
	cout << "\nHello!" << name;
	
	return 0;
}