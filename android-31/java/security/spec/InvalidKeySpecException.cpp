#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidKeySpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	InvalidKeySpecException::InvalidKeySpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"()V"
		) {}
	InvalidKeySpecException::InvalidKeySpecException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidKeySpecException::InvalidKeySpecException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InvalidKeySpecException::InvalidKeySpecException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security::spec

