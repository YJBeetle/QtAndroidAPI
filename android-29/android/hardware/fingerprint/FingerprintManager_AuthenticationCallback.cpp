#include "./FingerprintManager_AuthenticationResult.hpp"
#include "./FingerprintManager_AuthenticationCallback.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$AuthenticationCallback",
			"()V"
		);
	}
	
	// Methods
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationFailed()
	{
		__thiz.callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0)
	{
		__thiz.callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/fingerprint/FingerprintManager$AuthenticationResult;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::fingerprint

