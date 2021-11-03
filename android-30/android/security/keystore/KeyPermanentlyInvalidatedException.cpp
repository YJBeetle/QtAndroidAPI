#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./KeyPermanentlyInvalidatedException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"()V"
		) {}
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(JString arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(JString arg0, JThrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security::keystore

