#include "./InvalidAlgorithmParameterException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException()
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"()V"
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

