#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <QObject>
#include "person.h"

class Student: public Person {

private:
	int studentNumber_;

public:
	Student(QObject* parent, int studentNumber);
	~Student();
	void setStudentNumber(int number);
	int getStudentNumber();
};

#endif