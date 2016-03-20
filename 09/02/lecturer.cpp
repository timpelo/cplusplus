#include "lecturer.h"

using namespace std;

Lecturer::Lecturer(QObject* parent, int salary): 
	Person(parent), salary_(salary) {
		
		cout << "Lecturer created" << endl;
	
}

Lecturer::~Lecturer() {
	cout << "Lecturer deleted" << endl;
}

void Lecturer::setSalary(int salary) {
	salary_ = salary;
}

int Lecturer::getSalary() {
	return salary_;
}