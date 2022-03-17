#pragma once

#include "./BiometricPrompt_CryptoObject.def.hpp"
#include "./BiometricPrompt_AuthenticationResult.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::hardware::biometrics::BiometricPrompt_CryptoObject BiometricPrompt_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
