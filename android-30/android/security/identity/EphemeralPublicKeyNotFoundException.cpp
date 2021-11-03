#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./EphemeralPublicKeyNotFoundException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.EphemeralPublicKeyNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	EphemeralPublicKeyNotFoundException::EphemeralPublicKeyNotFoundException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.EphemeralPublicKeyNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

