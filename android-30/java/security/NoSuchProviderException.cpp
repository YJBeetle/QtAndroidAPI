#include "../../JString.hpp"
#include "./NoSuchProviderException.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	NoSuchProviderException::NoSuchProviderException()
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"()V"
		) {}
	NoSuchProviderException::NoSuchProviderException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

