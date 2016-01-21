#include <iostream>
#include <string>

using namespace std;

struct STUDENT
{
	string firstname;
	string lastname;
	int studentNumber;
	string gender;
};

int main() {
	
	STUDENT make;
	
	cout << "Give first name:" << endl;
	cin >> make.firstname;
	
	cout << "Give last name:" << endl;
	cin >> make.lastname;
	
	cout << "Give you student number:" << endl;
	cin >> make.studentNumber;
	
	cout << "Give your gender:" << endl;
	cin >> make.gender;
	
	cout << "Name: " << make.firstname << " " << make.lastname << endl;
	cout << "Gender: " << make.gender << endl;
	cout << "StudentNro: " << make.studentNumber << endl;
}