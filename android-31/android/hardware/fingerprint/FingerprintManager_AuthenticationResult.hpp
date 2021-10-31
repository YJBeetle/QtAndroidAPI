#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::fingerprint::FingerprintManager_CryptoObject getCryptoObject();
	};
} // namespace android::hardware::fingerprint

