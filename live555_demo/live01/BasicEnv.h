#ifndef __BASICENV_H__
#define __BASICENV_H__

#include "Env.h"

class BasicEnv: public Env
{
public:
	static BasicEnv* createNew();

	// ���¶����麯��
	virtual Env& operator<<(char const* str);
	virtual Env& operator<<(int i);
	virtual Env& operator<<(unsigned u);
	virtual Env& operator<<(double d);
	virtual Env& operator<<(void* p);

protected:
	BasicEnv();
	virtual ~BasicEnv();

private:

};

#endif // !__BASICENV_H__
