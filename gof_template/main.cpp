#include <iostream>

#include "CharDisplay.h"

int main(int argc, char *argv[])
{
	CharDisplay *cs = new CharDisplay('a');
	cs->display();

	getchar();

	return 0;
}