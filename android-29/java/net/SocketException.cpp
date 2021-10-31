#include "./SocketException.hpp"

namespace java::net
{
	// Fields
	
	SocketException::SocketException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketException::SocketException()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"()V"
		);
	}
	SocketException::SocketException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::net

