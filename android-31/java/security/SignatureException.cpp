#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SignatureException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SignatureException::SignatureException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	SignatureException::SignatureException()
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"()V"
		) {}
	SignatureException::SignatureException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SignatureException::SignatureException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SignatureException::SignatureException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

