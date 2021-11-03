#include "../../JString.hpp"
#include "./ConnectException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	ConnectException::ConnectException(QJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	ConnectException::ConnectException()
		: java::net::SocketException(
			"java.net.ConnectException",
			"()V"
		) {}
	ConnectException::ConnectException(JString arg0)
		: java::net::SocketException(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

