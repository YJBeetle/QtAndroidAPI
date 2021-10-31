#include "./FingerprintManager_AuthenticationResult.hpp"
#include "./FingerprintManager_AuthenticationCallback.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// QJniObject forward
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback()
		: __JniBaseClass(
			"android.hardware.fingerprint.FingerprintManager$AuthenticationCallback",
			"()V"
		) {}
	
	// Methods
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationFailed()
	{
		callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0)
	{
		callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/fingerprint/FingerprintManager$AuthenticationResult;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::fingerprint

