#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./DocTypeNotSupportedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// Constructors
	DocTypeNotSupportedException::DocTypeNotSupportedException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.DocTypeNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DocTypeNotSupportedException::DocTypeNotSupportedException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.DocTypeNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

