#include "./InvalidKeySpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	InvalidKeySpecException::InvalidKeySpecException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	InvalidKeySpecException::InvalidKeySpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"()V"
		) {}
	InvalidKeySpecException::InvalidKeySpecException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidKeySpecException::InvalidKeySpecException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InvalidKeySpecException::InvalidKeySpecException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security::spec

