#include "./ConnectException.hpp"

namespace java::net
{
	// Fields
	
	ConnectException::ConnectException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectException::ConnectException()
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"()V"
		);
	}
	ConnectException::ConnectException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::net

