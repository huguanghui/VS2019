#ifndef __ENV_H__
#define __ENV_H__

class Env
{
public:
	virtual ~Env();
	virtual Env& operator<<(char const* str) = 0;
	virtual Env& operator<<(int i) = 0;
	virtual Env& operator<<(unsigned u) = 0;
	virtual Env& operator<<(double d) = 0;
	virtual Env& operator<<(void* p) = 0;

protected:
	Env();

private:

};

#endif // !__ENV_H__
