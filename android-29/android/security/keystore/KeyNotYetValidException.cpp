#include "./KeyNotYetValidException.hpp"

namespace android::security::keystore
{
	// Fields
	
	KeyNotYetValidException::KeyNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyNotYetValidException::KeyNotYetValidException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"()V"
		);
	}
	KeyNotYetValidException::KeyNotYetValidException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyNotYetValidException::KeyNotYetValidException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

