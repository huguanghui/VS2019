#ifndef __CHARDISPLAY_H__
#define __CHARDISPLAY_H__

#include "AbstractDisplay.h"

class CharDisplay : public AbstractDisplay
{
public:
	CharDisplay(char ch);
	~CharDisplay();

	virtual void open();
	virtual void print();
	virtual void close();

private:
	char ch;
};

#endif // !__CHARDISPLAY_H__
