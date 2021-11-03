#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UserNotAuthenticatedException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	UserNotAuthenticatedException::UserNotAuthenticatedException(QJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	UserNotAuthenticatedException::UserNotAuthenticatedException()
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"()V"
		) {}
	UserNotAuthenticatedException::UserNotAuthenticatedException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UserNotAuthenticatedException::UserNotAuthenticatedException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

