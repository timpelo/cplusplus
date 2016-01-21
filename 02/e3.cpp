#include <iostream>
#include <string>

using namespace std;


struct NAME
{
	string firstname;
	string lastname;
};

struct STUDENT
{
	NAME name;
	int studentNumber;
	string gender;
};

int main() {

	STUDENT make;

	cout << "Give first name:" << endl;
	cin >> make.name.firstname;

	cout << "Give last name:" << endl;
	cin >> make.name.lastname;

	cout << "Give you student number:" << endl;
	cin >> make.studentNumber;

	cout << "Give your gender:" << endl;
	cin >> make.gender;
	
	cout << "Name: " << make.name.firstname << " " << make.name.lastname << endl;
	cout << "Gender: " << make.gender << endl;
	cout << "StudentNro: " << make.studentNumber << endl;
	cout << endl;
}