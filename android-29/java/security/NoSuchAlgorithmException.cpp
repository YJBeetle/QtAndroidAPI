#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NoSuchAlgorithmException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchAlgorithmException::NoSuchAlgorithmException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	NoSuchAlgorithmException::NoSuchAlgorithmException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"()V"
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	NoSuchAlgorithmException::NoSuchAlgorithmException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

