#include "../../JString.hpp"
#include "./PortUnreachableException.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	PortUnreachableException::PortUnreachableException()
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"()V"
		) {}
	PortUnreachableException::PortUnreachableException(JString arg0)
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

