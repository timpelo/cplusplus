#include "lecturer.h"
#include "student.h"
#include <QApplication>

int main(int argv, char **argc) {
	
	QApplication a(argv, argc);
	
	Student* s = new Student(&a, 1);
	Lecturer* l = new Lecturer(&a, 2500);
	
	QObject::connect(l, SIGNAL(tooMuchSalary()), s, SLOT(complainToHannuKarpo()));
	
	l->setSalary(5500);
	
	return 0;
}