#include "./InvalidKeyException.hpp"

namespace java::security
{
	// Fields
	
	InvalidKeyException::InvalidKeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidKeyException::InvalidKeyException()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"()V"
		);
	}
	InvalidKeyException::InvalidKeyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidKeyException::InvalidKeyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InvalidKeyException::InvalidKeyException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InvalidKeyException::InvalidKeyException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	InvalidKeyException::InvalidKeyException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

