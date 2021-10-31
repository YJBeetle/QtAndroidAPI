#include "./BiometricPrompt_AuthenticationResult.hpp"
#include "./BiometricPrompt_AuthenticationCallback.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QAndroidJniObject forward
	BiometricPrompt_AuthenticationCallback::BiometricPrompt_AuthenticationCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BiometricPrompt_AuthenticationCallback::BiometricPrompt_AuthenticationCallback()
		: __JniBaseClass(
			"android.hardware.biometrics.BiometricPrompt$AuthenticationCallback",
			"()V"
		) {}
	
	// Methods
	void BiometricPrompt_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationFailed()
	{
		callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationSucceeded(android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0)
	{
		callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/biometrics/BiometricPrompt$AuthenticationResult;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::biometrics

