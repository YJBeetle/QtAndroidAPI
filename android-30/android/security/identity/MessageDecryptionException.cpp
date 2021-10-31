#include "./MessageDecryptionException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	MessageDecryptionException::MessageDecryptionException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	MessageDecryptionException::MessageDecryptionException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.MessageDecryptionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	MessageDecryptionException::MessageDecryptionException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.MessageDecryptionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

