#include "person.h"
#include <QtGui>
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char **argv){
	
	QApplication a(argc, argv);
	
	Person* person = new Person(&a);
	QString newName("Jussi");
	
	person->setName(newName);
	cout << person->getName().toStdString() << endl;

	return 0;
}