#ifndef BMICALCULATOR
#define BMICALCULATOR
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>

class BmiCalculator : public QWidget {
	Q_OBJECT
public:
	BmiCalculator();
public slots:
	void calcBmi();

private:
	QLineEdit* heightField;
	QLineEdit* weightField;
	QLineEdit* resultField;
	QPushButton* button;
};

#endif