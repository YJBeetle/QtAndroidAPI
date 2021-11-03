#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	KeyManagementException::KeyManagementException(JString arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyManagementException::KeyManagementException(JThrowable arg0)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	KeyManagementException::KeyManagementException(JString arg0, JThrowable arg1)
		: java::security::KeyException(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

