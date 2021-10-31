#include "./InvalidReaderSignatureException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	InvalidReaderSignatureException::InvalidReaderSignatureException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	InvalidReaderSignatureException::InvalidReaderSignatureException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidReaderSignatureException::InvalidReaderSignatureException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.InvalidReaderSignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

