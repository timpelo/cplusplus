#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <QObject>
#include "person.h"

class Student: public Person {
	Q_OBJECT

private:
	int studentNumber_;

public:
	Student(QObject* parent, int studentNumber);
	~Student();
	void setStudentNumber(int number);
	int getStudentNumber();
	
public slots:
	void complainToHannuKarpo();
};

#endif