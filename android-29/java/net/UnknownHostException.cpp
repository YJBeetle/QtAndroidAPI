#include "../../JString.hpp"
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
	UnknownHostException::UnknownHostException(JString arg0)
		: java::io::IOException(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

