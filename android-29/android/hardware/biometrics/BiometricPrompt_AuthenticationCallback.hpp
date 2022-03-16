#pragma once

#include "./BiometricPrompt_AuthenticationResult.def.hpp"
#include "../../../JString.hpp"
#include "./BiometricPrompt_AuthenticationCallback.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	inline BiometricPrompt_AuthenticationCallback::BiometricPrompt_AuthenticationCallback()
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$AuthenticationCallback",
			"()V"
		) {}
	
	// Methods
	inline void BiometricPrompt_AuthenticationCallback::onAuthenticationError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void BiometricPrompt_AuthenticationCallback::onAuthenticationFailed() const
	{
		callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	inline void BiometricPrompt_AuthenticationCallback::onAuthenticationHelp(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void BiometricPrompt_AuthenticationCallback::onAuthenticationSucceeded(android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0) const
	{
		callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/biometrics/BiometricPrompt$AuthenticationResult;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

