#include "./EphemeralPublicKeyNotFoundException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.EphemeralPublicKeyNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.EphemeralPublicKeyNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

