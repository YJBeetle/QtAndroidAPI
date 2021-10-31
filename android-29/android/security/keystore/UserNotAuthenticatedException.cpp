#include "./UserNotAuthenticatedException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	UserNotAuthenticatedException::UserNotAuthenticatedException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	UserNotAuthenticatedException::UserNotAuthenticatedException()
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"()V"
		) {}
	UserNotAuthenticatedException::UserNotAuthenticatedException(jstring arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UserNotAuthenticatedException::UserNotAuthenticatedException(jstring arg0, jthrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

