#include <QtWidgets>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);

	QLabel b;
	b.setText("Hello World");
	b.show();
	
	return a.exec();
}
