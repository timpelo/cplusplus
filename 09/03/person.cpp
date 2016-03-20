#include "person.h"
#include <iostream>

using namespace std;

Person::Person(QObject* parent) : QObject(parent) {
	
	cout << "Person created" << endl;
}

Person::~Person(){
	cout << "Person deleted" << endl;
}

void Person::setName(QString name) {
	name_ = name;
}

QString Person::getName() {
	return name_;
}