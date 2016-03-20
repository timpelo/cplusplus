#include "student.h"
#include "lecturer.h"
#include <iostream>
#include <QApplication>

using namespace std;

int main(int argv, char **argc) {
	QApplication a(argv, argc);
	
	Student* student = new Student(&a, 1);
	Lecturer* lecturer = new Lecturer(&a, 1500);
	
	student->setStudentNumber(10);
	lecturer->setSalary(2500);
	
	cout << student->getStudentNumber() << endl;
	cout << lecturer->getSalary() << endl;

	return 0;
}