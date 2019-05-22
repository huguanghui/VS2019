#include <iostream>

#include "CharDisplay.h"

using namespace std;

CharDisplay::CharDisplay(char ch) {
	ch = ch;
}

CharDisplay::~CharDisplay() {

}

void CharDisplay::open()
{
	cout << "<<";
}

void CharDisplay::print()
{
	cout << ch;
}

void CharDisplay::close()
{
	cout << ">>" << endl;
}