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
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(jstring arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(jstring arg0, jthrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

