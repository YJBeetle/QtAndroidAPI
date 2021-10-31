#include "./KeyManagementException.hpp"

namespace java::security
{
	// Fields
	
	KeyManagementException::KeyManagementException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyManagementException::KeyManagementException()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"()V"
		);
	}
	KeyManagementException::KeyManagementException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyManagementException::KeyManagementException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	KeyManagementException::KeyManagementException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::security

