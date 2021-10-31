#include "./AlreadyPersonalizedException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	AlreadyPersonalizedException::AlreadyPersonalizedException(QAndroidJniObject obj) : android::security::identity::IdentityCredentialException(obj) {}
	
	// Constructors
	AlreadyPersonalizedException::AlreadyPersonalizedException(jstring arg0)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.AlreadyPersonalizedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AlreadyPersonalizedException::AlreadyPersonalizedException(jstring arg0, jthrowable arg1)
		: android::security::identity::IdentityCredentialException(
			"android.security.identity.AlreadyPersonalizedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

