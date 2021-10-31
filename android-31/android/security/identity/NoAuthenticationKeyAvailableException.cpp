#include "./NoAuthenticationKeyAvailableException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.NoAuthenticationKeyAvailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.NoAuthenticationKeyAvailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

