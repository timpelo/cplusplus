#include "student.h"

using namespace std;

Student::Student(QObject* parent, int studentNumber): 
	Person(parent), studentNumber_(studentNumber) {
		
		cout << "Student created" << endl;
	
}

Student::~Student() {
	cout << "Student deleted" << endl;
}

void Student::setStudentNumber(int number) {
	studentNumber_ = number;
}

int Student::getStudentNumber() {
	return studentNumber_;
}