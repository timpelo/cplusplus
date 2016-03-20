#ifndef LECTURER
#define LECTURER

#include <iostream>
#include <QObject>
#include "person.h"

class Lecturer: public Person {

private:
	int salary_;

public:
	Lecturer(QObject* parent, int salary);
	~Lecturer();
	void setSalary(int salary);
	int getSalary();
};

#endif