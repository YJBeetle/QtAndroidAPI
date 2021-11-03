#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./AlreadyPersonalizedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	AlreadyPersonalizedException::AlreadyPersonalizedException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	AlreadyPersonalizedException::AlreadyPersonalizedException(JString arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.AlreadyPersonalizedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AlreadyPersonalizedException::AlreadyPersonalizedException(JString arg0, JThrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.AlreadyPersonalizedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

