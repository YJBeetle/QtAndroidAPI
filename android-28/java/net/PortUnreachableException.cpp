#include "./PortUnreachableException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	PortUnreachableException::PortUnreachableException(QJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	PortUnreachableException::PortUnreachableException()
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"()V"
		) {}
	PortUnreachableException::PortUnreachableException(jstring arg0)
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

