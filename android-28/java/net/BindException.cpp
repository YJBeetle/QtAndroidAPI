#include "./BindException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	BindException::BindException(QJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	BindException::BindException()
		: java::net::SocketException(
			"java.net.BindException",
			"()V"
		) {}
	BindException::BindException(jstring arg0)
		: java::net::SocketException(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

