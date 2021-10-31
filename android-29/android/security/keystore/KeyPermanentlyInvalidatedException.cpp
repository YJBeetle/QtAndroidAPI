#include "./KeyPermanentlyInvalidatedException.hpp"

namespace android::security::keystore
{
	// Fields
	
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"()V"
		);
	}
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyPermanentlyInvalidatedException::KeyPermanentlyInvalidatedException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyPermanentlyInvalidatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

