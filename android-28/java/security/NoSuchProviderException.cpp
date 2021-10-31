#include "./NoSuchProviderException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchProviderException::NoSuchProviderException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	NoSuchProviderException::NoSuchProviderException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"()V"
		) {}
	NoSuchProviderException::NoSuchProviderException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security

