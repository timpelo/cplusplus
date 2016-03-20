#ifndef LECTURER
#define LECTURER

#include <iostream>
#include <QObject>
#include "person.h"

class Lecturer: public Person {
	Q_OBJECT

private:
	int salary_;

public:
	Lecturer(QObject* parent, int salary);
	~Lecturer();
	void setSalary(int salary);
	int getSalary();
	
signals:
	void tooMuchSalary();
};

#endif