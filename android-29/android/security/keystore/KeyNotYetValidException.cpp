#include "./KeyNotYetValidException.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	KeyNotYetValidException::KeyNotYetValidException(QAndroidJniObject obj) : java::security::InvalidKeyException(obj) {}
	
	// Constructors
	KeyNotYetValidException::KeyNotYetValidException()
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"()V"
		) {}
	KeyNotYetValidException::KeyNotYetValidException(jstring arg0)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyNotYetValidException::KeyNotYetValidException(jstring arg0, jthrowable arg1)
		: java::security::InvalidKeyException(
			"android.security.keystore.KeyNotYetValidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security::keystore

