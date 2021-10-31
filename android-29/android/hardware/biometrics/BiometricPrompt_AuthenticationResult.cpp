#include "./BiometricPrompt_CryptoObject.hpp"
#include "./BiometricPrompt_AuthenticationResult.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QAndroidJniObject forward
	BiometricPrompt_AuthenticationResult::BiometricPrompt_AuthenticationResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject BiometricPrompt_AuthenticationResult::getCryptoObject()
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace android::hardware::biometrics

