#include "./UserPresenceUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	UserPresenceUnavailableException::UserPresenceUnavailableException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	UserPresenceUnavailableException::UserPresenceUnavailableException()
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"()V"
		) {}
	UserPresenceUnavailableException::UserPresenceUnavailableException(jstring arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UserPresenceUnavailableException::UserPresenceUnavailableException(jstring arg0, jthrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

