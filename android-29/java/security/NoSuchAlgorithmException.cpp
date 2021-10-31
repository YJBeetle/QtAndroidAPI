#include "./NoSuchAlgorithmException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	NoSuchAlgorithmException::NoSuchAlgorithmException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	NoSuchAlgorithmException::NoSuchAlgorithmException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"()V"
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

