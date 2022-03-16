#include "./FingerprintManager_CryptoObject.hpp"
#include "./FingerprintManager_AuthenticationResult.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	
	// Methods
	android::hardware::fingerprint::FingerprintManager_CryptoObject FingerprintManager_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;"
		);
	}
} // namespace android::hardware::fingerprint

