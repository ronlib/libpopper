#include <QMessageBox>
#include "popper.h"

void Popper::pop(const char * str)
{
	QMessageBox msgBox;
	msgBox.setWindowTitle("Title");
	msgBox.setText(str);
	msgBox.setStandardButtons(QMessageBox::Ok);
	//QMessageBox::information(QMessageBox::Information, "title", str);
	msgBox.exec();
}
