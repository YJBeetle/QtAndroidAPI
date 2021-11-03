#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidAlgorithmParameterException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException()
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"()V"
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

