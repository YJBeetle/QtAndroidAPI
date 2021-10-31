#include "./IdentityCredentialException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	IdentityCredentialException::IdentityCredentialException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	IdentityCredentialException::IdentityCredentialException(jstring arg0)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IdentityCredentialException::IdentityCredentialException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::identity

