#include "./InvalidRequestMessageException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	InvalidRequestMessageException::InvalidRequestMessageException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	InvalidRequestMessageException::InvalidRequestMessageException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidRequestMessageException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidRequestMessageException::InvalidRequestMessageException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidRequestMessageException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

