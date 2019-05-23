#include <iostream>
#include <string>

#include "BasicEnv.h"


int main(int argc, char *argv[])
{
	BasicEnv* be = BasicEnv::createNew();

	*be << "hello world!\n";
	*be << 123 << "\n";
	*be << -1 << "\n";
	*be << 1.22 << "\n";

	getchar();

	return 0;
}