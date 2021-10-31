#include "./KeyExpiredException.hpp"

namespace android::security::keystore
{
	// Fields
	
	KeyExpiredException::KeyExpiredException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyExpiredException::KeyExpiredException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"()V"
		);
	}
	KeyExpiredException::KeyExpiredException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyExpiredException::KeyExpiredException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyExpiredException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

