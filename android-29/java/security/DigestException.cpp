#include "./DigestException.hpp"

namespace java::security
{
	// Fields
	
	DigestException::DigestException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DigestException::DigestException()
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"()V"
		);
	}
	DigestException::DigestException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DigestException::DigestException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	DigestException::DigestException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	DigestException::DigestException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	DigestException::DigestException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

