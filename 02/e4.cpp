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
	
	bool exit = false;
	STUDENT students[20];
	int count = 0;
	int command = 5;
	
	while(!exit) {
		
		while(command > 3 || command < 0) {
		cout << "Give command: " << endl;
		cout << "1. Add student" << endl;
		cout << "2. Show students" << endl;
		cout << "3. Exit" << endl;
		
		cin >> command;
		}
		
		switch(command){
			
			case 1:
			{
				STUDENT add;
	
				cout << "Give first name:" << endl;
				cin >> add.name.firstname;
	
				cout << "Give last name:" << endl;
				cin >> add.name.lastname;
	
				cout << "Give your gender:" << endl;
				cin >> add.gender;
				
				add.studentNumber = count + 1;
				
				if(count < 20) {
					students[count] = add;
					count++;
				}
				else {
					cout << "Maximum number of students in the list." << endl;
				}
			}break;
			case 2:
			{	
				for(int i = 0; i < count; i++) {
					STUDENT result = students[i];
					cout << "Name: " << result.name.firstname << " " << result.name.lastname << endl;
					cout << "Gender: " << result.gender << endl;
					cout << "StudentNro: " << result.studentNumber << endl;
					cout << endl;
				}
			}break;
			case 3:
			{
				exit = true;
			}break;
		}
		
		command = 5;
	}
	
	
	
	
	
}