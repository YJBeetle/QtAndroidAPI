#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./MessageDecryptionException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	MessageDecryptionException::MessageDecryptionException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	MessageDecryptionException::MessageDecryptionException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.MessageDecryptionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	MessageDecryptionException::MessageDecryptionException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.MessageDecryptionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

