#include "./KeyExpiredException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyExpiredException::KeyExpiredException(QJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	KeyExpiredException::KeyExpiredException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"()V"
		) {}
	KeyExpiredException::KeyExpiredException(jstring arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyExpiredException::KeyExpiredException(jstring arg0, jthrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

