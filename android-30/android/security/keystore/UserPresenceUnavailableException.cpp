#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UserPresenceUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	UserPresenceUnavailableException::UserPresenceUnavailableException(QJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	UserPresenceUnavailableException::UserPresenceUnavailableException()
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"()V"
		) {}
	UserPresenceUnavailableException::UserPresenceUnavailableException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UserPresenceUnavailableException::UserPresenceUnavailableException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

