#include "./KeyException.hpp"

namespace java::security
{
	// Fields
	
	KeyException::KeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyException::KeyException()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"()V"
		);
	}
	KeyException::KeyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyException::KeyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	KeyException::KeyException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	KeyException::KeyException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	KeyException::KeyException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

