#include <QApplication>
#include <QTextEdit>

void clearText(QTextEdit text);

int main(int argv, char** argc)
{
	QApplication a(argv, argc);
	
	QTextEdit text;
	text.show();

	return a.exec();
}

void clearText(QTextEdit text)
{
	text.setText("");
}
