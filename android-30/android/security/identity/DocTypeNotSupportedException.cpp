#include "./DocTypeNotSupportedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	DocTypeNotSupportedException::DocTypeNotSupportedException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	DocTypeNotSupportedException::DocTypeNotSupportedException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.DocTypeNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	DocTypeNotSupportedException::DocTypeNotSupportedException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.DocTypeNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

