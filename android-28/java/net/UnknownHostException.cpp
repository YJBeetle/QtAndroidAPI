#include "./UnknownHostException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	UnknownHostException::UnknownHostException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	UnknownHostException::UnknownHostException()
		: java::io::IOException(
			"java.net.UnknownHostException",
			"()V"
		) {}
	UnknownHostException::UnknownHostException(jstring arg0)
		: java::io::IOException(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

