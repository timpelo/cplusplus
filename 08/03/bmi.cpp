#include "bmi.h"
BmiCalculator::BmiCalculator()
{
	setWindowTitle("Bmi calculator");
	QLabel* height = new QLabel("Height:");
	QLabel* weight = new QLabel("Weight:");
	QLabel* result = new QLabel("Result:");
	
	heightField = new QLineEdit;
	weightField = new QLineEdit;
	resultField = new QLineEdit;
	resultField->setReadOnly(true);
	
	button = new QPushButton("Calculate");
	
	QVBoxLayout* layout = new QVBoxLayout;
	layout->addWidget(height);
	layout->addWidget(heightField);
	layout->addWidget(weight);
	layout->addWidget(weightField);
	layout->addWidget(result);
	layout->addWidget(resultField);
	layout->addWidget(button);
	
	setLayout(layout);
	connect(button,SIGNAL(clicked()), this
		, SLOT(calcBmi()));
}

void BmiCalculator::calcBmi()
{
	float height = heightField->text().toFloat();
	height = height/100;
	float weight = weightField->text().toFloat();
	
	float result = weight / (height*height);
	QString resultString;
	resultString.setNum(result);
	resultField->setText(resultString);
}