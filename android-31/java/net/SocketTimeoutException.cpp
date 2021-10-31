#include "./SocketTimeoutException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketTimeoutException::SocketTimeoutException(QAndroidJniObject obj) : java::io::InterruptedIOException(obj) {}
	
	// Constructors
	SocketTimeoutException::SocketTimeoutException()
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"()V"
		) {}
	SocketTimeoutException::SocketTimeoutException(jstring arg0)
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

