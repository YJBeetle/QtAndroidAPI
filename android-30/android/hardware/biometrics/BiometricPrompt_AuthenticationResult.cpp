#include "./BiometricPrompt_CryptoObject.hpp"
#include "./BiometricPrompt_AuthenticationResult.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	
	// Methods
	jint BiometricPrompt_AuthenticationResult::getAuthenticationType() const
	{
		return callMethod<jint>(
			"getAuthenticationType",
			"()I"
		);
	}
	android::hardware::biometrics::BiometricPrompt_CryptoObject BiometricPrompt_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace android::hardware::biometrics

