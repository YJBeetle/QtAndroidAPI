#include "./DigestException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	DigestException::DigestException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	DigestException::DigestException()
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"()V"
		) {}
	DigestException::DigestException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	DigestException::DigestException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	DigestException::DigestException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

