#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UnknownAuthenticationKeyException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.UnknownAuthenticationKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UnknownAuthenticationKeyException::UnknownAuthenticationKeyException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.UnknownAuthenticationKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

