#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidRequestMessageException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidRequestMessageException::InvalidRequestMessageException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	InvalidRequestMessageException::InvalidRequestMessageException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidRequestMessageException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidRequestMessageException::InvalidRequestMessageException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidRequestMessageException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

