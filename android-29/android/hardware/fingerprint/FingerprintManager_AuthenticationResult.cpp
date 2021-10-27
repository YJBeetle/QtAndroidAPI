#include "./FingerprintManager_CryptoObject.hpp"
#include "./FingerprintManager_AuthenticationResult.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	FingerprintManager_AuthenticationResult::FingerprintManager_AuthenticationResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FingerprintManager_AuthenticationResult::getCryptoObject()
	{
		return __thiz.callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;"
		);
	}
} // namespace android::hardware::fingerprint

