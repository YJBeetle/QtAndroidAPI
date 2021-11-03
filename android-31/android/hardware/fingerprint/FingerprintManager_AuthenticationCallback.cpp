#include "./FingerprintManager_AuthenticationResult.hpp"
#include "../../../JString.hpp"
#include "./FingerprintManager_AuthenticationCallback.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// QAndroidJniObject forward
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FingerprintManager_AuthenticationCallback::FingerprintManager_AuthenticationCallback()
		: JObject(
			"android.hardware.fingerprint.FingerprintManager$AuthenticationCallback",
			"()V"
		) {}
	
	// Methods
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, JString arg1)
	{
		callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationFailed()
	{
		callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, JString arg1)
	{
		callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
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

