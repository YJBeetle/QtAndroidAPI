#include "./KeyManagementException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyManagementException::KeyManagementException(QAndroidJniObject obj) : java::security::KeyException(obj) {}
	
	// Constructors
	KeyManagementException::KeyManagementException()
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"()V"
		) {}
	KeyManagementException::KeyManagementException(jstring arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyManagementException::KeyManagementException(jthrowable arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	KeyManagementException::KeyManagementException(jstring arg0, jthrowable arg1)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

