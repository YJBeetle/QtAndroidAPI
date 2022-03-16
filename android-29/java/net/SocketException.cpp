#include "../../JString.hpp"
#include "./SocketException.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	SocketException::SocketException()
		: java::io::IOException(
			"java.net.SocketException",
			"()V"
		) {}
	SocketException::SocketException(JString arg0)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

