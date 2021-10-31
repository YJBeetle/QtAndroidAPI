#include "./UnknownServiceException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	UnknownServiceException::UnknownServiceException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
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

