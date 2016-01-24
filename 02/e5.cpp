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

STUDENT* searchStudentId(int id, int count, STUDENT students[]);
STUDENT* searchStudentName(string Name, int count, STUDENT students[]);

int main()
{

    bool exit = false;
    STUDENT students[20];
    int count = 0;
    int command = 5;

    while(!exit)
    {

        while(command > 3 || command < 0)
        {
            cout << "Give command: " << endl;
            cout << "1. Add student" << endl;
            cout << "2. Show students" << endl;
            cout << "3. Search student" << endl;
            cout << "4. Exit" << endl;

            cin >> command;
        }

        switch(command)
        {

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

            if(count < 20)
            {
                students[count] = add;
                count++;
            }
            else
            {
                cout << "Maximum number of students in the list." << endl;
            }
        }
        break;
        case 2:
        {
            for(int i = 0; i < count; i++)
            {
                STUDENT result = students[i];
                cout << "Name: " << result.name.firstname << " " << result.name.lastname << endl;
                cout << "Gender: " << result.gender << endl;
                cout << "StudentNro: " << result.studentNumber << endl;
                cout << endl;
            }
        }
        break;
        case 3:
        {
            cout << "1. By number" << endl;
            cout << "2. By name" << endl;

            int subCommand;
            cin >> subCommand;

            switch(subCommand)
            {
            case 1:
            {
                cout << "Give student number: ";
                int number;
                cin >> number;
                STUDENT* result = searchStudentId(number, count, students);

                if(result != NULL)
                {
                    STUDENT student = *result;
                    cout << "Student found!" << endl;
                    cout << "Name: " << student.name.firstname << " " << student.name.lastname << endl;
                    cout << "Gender: " << student.gender << endl;
                    cout << "StudentNro: " << student.studentNumber << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Student not found." << endl;
                }
            }
            break;
            case 2:
            {
                cout << "Give student first or last name: ";
                string name;
                cin >> name;
                STUDENT* result = searchStudentName(name, count, students);

                if(result != NULL)
                {
                    STUDENT student = *result;
                    cout << "Student found!" << endl;
                    cout << "Name: " << student.name.firstname << " " << student.name.lastname << endl;
                    cout << "Gender: " << student.gender << endl;
                    cout << "StudentNro: " << student.studentNumber << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Student not found." << endl;
                }
            }
            break;
            default:
                cout << "Unknown command" << endl;
            }
        }
        break;
        case 4:
        {
            exit = true;
        }
        break;
        }

        command = 5;
    }





}

STUDENT* searchStudentId(int id, int count, STUDENT students[])
{
    STUDENT* result = NULL;
    for(int i = 0; i < count; i++)
    {
        if(students[i].studentNumber == id)
        {
            result = &students[i];
        }
    }

    return result;
}

STUDENT* searchStudentName(string name, int count, STUDENT students[])
{
    STUDENT* result = NULL;
    for(int i = 0; i < count; i++)
    {
        if(students[i].name.firstname == name || students[i].name.lastname == name)
        {
            result = &students[i];
        }
    }

    return result;
}