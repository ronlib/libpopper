#include <QMessageBox>
#include "popper.h"

void Popper::pop(const char * str)
{
	QMessageBox::information(NULL, "Hello World!", str);
}
