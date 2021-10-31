#include "./UserPresenceUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	UserPresenceUnavailableException::UserPresenceUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserPresenceUnavailableException::UserPresenceUnavailableException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"()V"
		);
	}
	UserPresenceUnavailableException::UserPresenceUnavailableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UserPresenceUnavailableException::UserPresenceUnavailableException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserPresenceUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

