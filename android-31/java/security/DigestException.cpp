#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./DigestException.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	DigestException::DigestException()
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"()V"
		) {}
	DigestException::DigestException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DigestException::DigestException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	DigestException::DigestException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

