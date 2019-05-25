#ifndef __CLIENT_CONNECT_H__
#define __CLIENT_CONNECT_H__

#ifndef REQUEST_BUFFER_SIZE
#define REQUEST_BUFFER_SIZE 20000
#endif

#ifndef RESPONSE_BUFFER_SIZE
#define RESPONSE_BUFFER_SIZE 20000
#endif

/**
* @brief �ͻ���������\n
* ���������ͻ���ʹ��TCP������״̬
*/

class ClientConnect {
public:
	ClientConnect();
	virtual ~ClientConnect();

	void handleRead(const char *s);
	void handleRequestBytes(int newBytesRead);

private:
	unsigned char fRequestBuffer[REQUEST_BUFFER_SIZE];
	unsigned char fResponseBuffer[RESPONSE_BUFFER_SIZE];
	unsigned int fRequsetBytesAlreadySeen;
	unsigned int fRequsetBytesLeft;
};

#endif // !__CLIENT_CONNECT_H__
