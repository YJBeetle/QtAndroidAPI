#include "./SignatureException.hpp"

namespace java::security
{
	// Fields
	
	SignatureException::SignatureException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SignatureException::SignatureException()
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"()V"
		);
	}
	SignatureException::SignatureException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SignatureException::SignatureException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SignatureException::SignatureException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security

