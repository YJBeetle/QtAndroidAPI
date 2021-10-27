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
		
		FingerprintManager_AuthenticationResult(QAndroidJniObject obj);
		// Constructors
		FingerprintManager_AuthenticationResult() = default;
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace android::hardware::fingerprint

