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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace android::hardware::fingerprint

