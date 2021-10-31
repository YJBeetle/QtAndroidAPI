#include "./BiometricPrompt_AuthenticationResult.hpp"
#include "./BiometricPrompt_AuthenticationCallback.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	BiometricPrompt_AuthenticationCallback::BiometricPrompt_AuthenticationCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BiometricPrompt_AuthenticationCallback::BiometricPrompt_AuthenticationCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$AuthenticationCallback",
			"()V"
		);
	}
	
	// Methods
	void BiometricPrompt_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationFailed()
	{
		__thiz.callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationSucceeded(android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0)
	{
		__thiz.callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/biometrics/BiometricPrompt$AuthenticationResult;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::biometrics

