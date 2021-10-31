#include "./UnknownServiceException.hpp"

namespace java::net
{
	// Fields
	
	UnknownServiceException::UnknownServiceException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnknownServiceException::UnknownServiceException()
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownServiceException",
			"()V"
		);
	}
	UnknownServiceException::UnknownServiceException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownServiceException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::net

