#include <iostream>
#include <string>

#include "BasicEnv.h"
#include "ClientConnect.h"


int main(int argc, char *argv[])
{
	BasicEnv* be = BasicEnv::createNew();

	*be << "hello world!\n";
	*be << 123 << "\n";
	*be << -1 << "\n";
	*be << 1.22 << "\n";

	ClientConnect* cc = new ClientConnect();
	if (cc != NULL) {
		cc->handleRead("Test");
		cc->handleRequestBytes(15);
	}

	getchar();

	return 0;
}