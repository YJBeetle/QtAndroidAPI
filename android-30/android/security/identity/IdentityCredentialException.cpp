#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./IdentityCredentialException.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	IdentityCredentialException::IdentityCredentialException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	IdentityCredentialException::IdentityCredentialException(JString arg0)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IdentityCredentialException::IdentityCredentialException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.security.identity.IdentityCredentialException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::identity

