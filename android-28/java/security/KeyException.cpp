#include "./KeyException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyException::KeyException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	KeyException::KeyException()
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"()V"
		) {}
	KeyException::KeyException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyException::KeyException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	KeyException::KeyException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

