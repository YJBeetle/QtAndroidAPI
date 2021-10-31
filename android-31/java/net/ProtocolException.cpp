#include "./ProtocolException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ProtocolException::ProtocolException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ProtocolException::ProtocolException()
		: java::io::IOException(
			"java.net.ProtocolException",
			"()V"
		) {}
	ProtocolException::ProtocolException(jstring arg0)
		: java::io::IOException(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

