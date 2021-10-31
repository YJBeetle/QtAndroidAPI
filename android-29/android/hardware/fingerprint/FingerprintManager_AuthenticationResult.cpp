#include "./FingerprintManager_CryptoObject.hpp"
#include "./FingerprintManager_AuthenticationResult.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// QJniObject forward
	FingerprintManager_AuthenticationResult::FingerprintManager_AuthenticationResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::hardware::fingerprint::FingerprintManager_CryptoObject FingerprintManager_AuthenticationResult::getCryptoObject()
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;"
		);
	}
} // namespace android::hardware::fingerprint

