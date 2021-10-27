#include "./GeneralSecurityException.hpp"

namespace java::security
{
	// Fields
	
	GeneralSecurityException::GeneralSecurityException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GeneralSecurityException::GeneralSecurityException()
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"()V"
		);
	}
	GeneralSecurityException::GeneralSecurityException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	GeneralSecurityException::GeneralSecurityException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	GeneralSecurityException::GeneralSecurityException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	GeneralSecurityException::GeneralSecurityException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	GeneralSecurityException::GeneralSecurityException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

