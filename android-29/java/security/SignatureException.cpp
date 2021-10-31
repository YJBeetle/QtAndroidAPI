#include "./SignatureException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	SignatureException::SignatureException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	SignatureException::SignatureException()
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"()V"
		) {}
	SignatureException::SignatureException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SignatureException::SignatureException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SignatureException::SignatureException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

