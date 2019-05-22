#include "AbstractDisplay.h"

AbstractDisplay::AbstractDisplay() {

}

AbstractDisplay::~AbstractDisplay() {

}

void AbstractDisplay::display() {
	open();

	for (int i=0; i < 5; i++)
	{
		print();
	}

	close();
}