#include <QApplication>
#include "bmi.h"

int main (int argv, char** argc)
{
	QApplication app(argv, argc);
	
	BmiCalculator calc;
	calc.show();
	
	return app.exec();
}
