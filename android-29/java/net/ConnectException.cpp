#include "./ConnectException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectException::ConnectException(QAndroidJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	ConnectException::ConnectException()
		: java::net::SocketException(
			"java.net.ConnectException",
			"()V"
		) {}
	ConnectException::ConnectException(jstring arg0)
		: java::net::SocketException(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

