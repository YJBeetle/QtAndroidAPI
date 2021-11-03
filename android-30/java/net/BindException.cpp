#include "../../JString.hpp"
#include "./BindException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	BindException::BindException(QAndroidJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	BindException::BindException()
		: java::net::SocketException(
			"java.net.BindException",
			"()V"
		) {}
	BindException::BindException(JString arg0)
		: java::net::SocketException(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

