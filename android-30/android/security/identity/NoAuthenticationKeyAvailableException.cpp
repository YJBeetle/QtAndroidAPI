#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./NoAuthenticationKeyAvailableException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.NoAuthenticationKeyAvailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NoAuthenticationKeyAvailableException::NoAuthenticationKeyAvailableException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.NoAuthenticationKeyAvailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

