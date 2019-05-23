#include <stdio.h>

#include "BasicEnv.h"

BasicEnv::BasicEnv() {
}

BasicEnv::~BasicEnv(){
}

BasicEnv* BasicEnv::createNew() {
	return new BasicEnv();
}

Env& BasicEnv::operator<<(char const* str) {
	if (NULL == str) {
		str = "(NULL)";
	}
	fprintf(stderr, "%s", str);
	return *this;
}

Env& BasicEnv::operator<<(int i) {
	fprintf(stderr, "%d", i);
	return *this;
}

Env& BasicEnv::operator<<(unsigned u) {
	fprintf(stderr, "%u", u);
	return *this;
}

Env& BasicEnv::operator<<(double d) {
	fprintf(stderr, "%f", d);
	return *this;
}

Env& BasicEnv::operator<<(void* p) {
	fprintf(stderr, "%p", p);
	return *this;
}