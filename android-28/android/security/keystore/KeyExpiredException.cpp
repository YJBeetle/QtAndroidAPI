#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./KeyExpiredException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	KeyExpiredException::KeyExpiredException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"()V"
		) {}
	KeyExpiredException::KeyExpiredException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyExpiredException::KeyExpiredException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

