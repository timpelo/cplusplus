#ifndef PERSON
#define PERSON

#include <QObject>
#include <QString>

class Person: public QObject {
	Q_OBJECT
	
private:
	QString name_;
public:
	Person(QObject* parent);
	~Person();
	void setName(QString name);
	QString getName();
};

#endif