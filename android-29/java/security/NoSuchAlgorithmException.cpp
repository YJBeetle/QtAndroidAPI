#include "./NoSuchAlgorithmException.hpp"

namespace java::security
{
	// Fields
	
	NoSuchAlgorithmException::NoSuchAlgorithmException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchAlgorithmException::NoSuchAlgorithmException()
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"()V"
		);
	}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security

