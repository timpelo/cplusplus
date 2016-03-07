#include <QApplication>
#include <QTextEdit>

void clearText(QTextEdit text);

int main(int argv, char** argc)
{
	// Widgets are modules like buttons, forms, text areas
	// for Gui. In this example window will open and there
	// will be text area.
	QApplication a(argv, argc);
	
	QTextEdit text;
	text.show();

	return a.exec();
}

void clearText(QTextEdit text)
{
	text.setText("");
}
