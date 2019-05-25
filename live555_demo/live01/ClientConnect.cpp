#include <stdio.h>
#include <string>

#include "ClientConnect.h"

ClientConnect::ClientConnect()
	:fRequsetBytesAlreadySeen(0), fRequsetBytesLeft(0)
{
	memset(fRequestBuffer, 0, sizeof(fRequestBuffer));
	memset(fResponseBuffer, 0, sizeof(fResponseBuffer));
}

ClientConnect::~ClientConnect()
{

}

void ClientConnect::handleRead(const char* s)
{
	if (NULL == s) {
		return;
	}
	
	fprintf(stderr, "Read[%s]\n", s);

	return;
}

void ClientConnect::handleRequestBytes(int newBytesRead)
{
	if (newBytesRead > 0)
	{
		fprintf(stderr, "%s:%d\n", __FUNCTION__, __LINE__);
	}

	return;
}