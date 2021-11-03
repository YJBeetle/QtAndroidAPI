#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidReaderSignatureException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	InvalidReaderSignatureException::InvalidReaderSignatureException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	InvalidReaderSignatureException::InvalidReaderSignatureException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidReaderSignatureException::InvalidReaderSignatureException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

