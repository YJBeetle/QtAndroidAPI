#pragma once

#include "./FingerprintManager_CryptoObject.def.hpp"
#include "./FingerprintManager_AuthenticationResult.def.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::hardware::fingerprint::FingerprintManager_CryptoObject FingerprintManager_AuthenticationResult::getCryptoObject() const
	{
		return callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;"
		);
	}
} // namespace android::hardware::fingerprint

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::fingerprint;
#endif
