#include "./UnknownServiceException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	UnknownServiceException::UnknownServiceException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	UnknownServiceException::UnknownServiceException()
		: java::io::IOException(
			"java.net.UnknownServiceException",
			"()V"
		) {}
	UnknownServiceException::UnknownServiceException(jstring arg0)
		: java::io::IOException(
			"java.net.UnknownServiceException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::net

