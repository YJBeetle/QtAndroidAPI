#include "./InvalidParameterException.hpp"

namespace java::security
{
	// Fields
	
	InvalidParameterException::InvalidParameterException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidParameterException::InvalidParameterException()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"()V"
		);
	}
	InvalidParameterException::InvalidParameterException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::security

