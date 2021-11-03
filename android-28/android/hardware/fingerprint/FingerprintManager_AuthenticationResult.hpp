#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::fingerprint::FingerprintManager_CryptoObject getCryptoObject();
	};
} // namespace android::hardware::fingerprint

