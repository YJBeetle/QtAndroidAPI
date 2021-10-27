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
	NoSuchProviderException::NoSuchProviderException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchProviderException::NoSuchProviderException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security

