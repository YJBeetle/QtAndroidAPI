#include "./CipherSuiteNotSupportedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	CipherSuiteNotSupportedException::CipherSuiteNotSupportedException(QJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	CipherSuiteNotSupportedException::CipherSuiteNotSupportedException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.CipherSuiteNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CipherSuiteNotSupportedException::CipherSuiteNotSupportedException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.CipherSuiteNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

