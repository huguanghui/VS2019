#ifndef __ABSTRACTDISPLAY_H__
#define __ABSTRACTDISPLAY_H__

class AbstractDisplay
{
public:
	AbstractDisplay();
	virtual ~AbstractDisplay();

	void display();
	virtual void open() = 0;
	virtual void print() = 0;
	virtual void close() = 0;
};

#endif