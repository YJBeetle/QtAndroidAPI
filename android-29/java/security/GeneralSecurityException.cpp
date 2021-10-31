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
	GeneralSecurityException::GeneralSecurityException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	GeneralSecurityException::GeneralSecurityException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	GeneralSecurityException::GeneralSecurityException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security

