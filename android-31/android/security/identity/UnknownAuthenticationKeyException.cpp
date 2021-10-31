#include "./UnknownAuthenticationKeyException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.UnknownAuthenticationKeyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.UnknownAuthenticationKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

