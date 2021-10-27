#include "./InvalidKeySpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	InvalidKeySpecException::InvalidKeySpecException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidKeySpecException::InvalidKeySpecException()
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"()V"
		);
	}
	InvalidKeySpecException::InvalidKeySpecException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidKeySpecException::InvalidKeySpecException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InvalidKeySpecException::InvalidKeySpecException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InvalidKeySpecException::InvalidKeySpecException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	InvalidKeySpecException::InvalidKeySpecException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security::spec

