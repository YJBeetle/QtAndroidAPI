#include "./SocketException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SocketException::SocketException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	SocketException::SocketException()
		: java::io::IOException(
			"java.net.SocketException",
			"()V"
		) {}
	SocketException::SocketException(jstring arg0)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

