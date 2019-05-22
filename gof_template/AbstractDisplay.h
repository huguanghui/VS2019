#ifndef __ABSTRACTDISPLAY_H__
#define __ABSTRACTDISPLAY_H__

class AbstractDisplay
{
public:
	AbstractDisplay();
	virtual ~AbstractDisplay();

	void display();
	virtual void open() {};
	virtual void print() {};
	virtual void close() {};
};

#endif