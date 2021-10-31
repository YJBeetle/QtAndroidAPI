#include "./UnknownHostException.hpp"

namespace java::net
{
	// Fields
	
	UnknownHostException::UnknownHostException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnknownHostException::UnknownHostException()
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownHostException",
			"()V"
		);
	}
	UnknownHostException::UnknownHostException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::net

