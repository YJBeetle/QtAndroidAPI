#include "./NoSuchProviderException.hpp"

namespace java::security
{
	// Fields
	
	NoSuchProviderException::NoSuchProviderException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchProviderException::NoSuchProviderException()
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"()V"
		);
	}
	NoSuchProviderException::NoSuchProviderException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::security

