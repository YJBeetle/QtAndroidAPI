#include "./NoRouteToHostException.hpp"

namespace java::net
{
	// Fields
	
	NoRouteToHostException::NoRouteToHostException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoRouteToHostException::NoRouteToHostException()
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"()V"
		);
	}
	NoRouteToHostException::NoRouteToHostException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::net

