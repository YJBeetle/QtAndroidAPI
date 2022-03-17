#pragma once

#include "./BiometricPrompt_CryptoObject.def.hpp"
#include "./BiometricPrompt_AuthenticationResult.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint BiometricPrompt_AuthenticationResult::getAuthenticationType() const
	{
		return callMethod<jint>(
			"getAuthenticationType",
			"()I"
		);
	}
	inline android::hardware::biometrics::BiometricPrompt_CryptoObject BiometricPrompt_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

