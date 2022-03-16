#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CipherSuiteNotSupportedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	CipherSuiteNotSupportedException::CipherSuiteNotSupportedException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.CipherSuiteNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CipherSuiteNotSupportedException::CipherSuiteNotSupportedException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.CipherSuiteNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

