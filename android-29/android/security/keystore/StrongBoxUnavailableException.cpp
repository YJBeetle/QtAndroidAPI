#include "./StrongBoxUnavailableException.hpp"

namespace android::security::keystore
{
	// Fields
	
	StrongBoxUnavailableException::StrongBoxUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StrongBoxUnavailableException::StrongBoxUnavailableException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"()V"
		);
	}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	StrongBoxUnavailableException::StrongBoxUnavailableException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.StrongBoxUnavailableException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore

