#include "../../JString.hpp"
#include "./SocketTimeoutException.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	SocketTimeoutException::SocketTimeoutException()
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"()V"
		) {}
	SocketTimeoutException::SocketTimeoutException(JString arg0)
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

