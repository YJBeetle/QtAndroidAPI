#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Signature;
}
namespace javax::crypto
{
	class Cipher;
}
namespace javax::crypto
{
	class Mac;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject : public __JniBaseClass
	{
	public:
		// Fields
		
		FingerprintManager_CryptoObject(QAndroidJniObject obj);
		// Constructors
		FingerprintManager_CryptoObject(java::security::Signature &arg0);
		FingerprintManager_CryptoObject(javax::crypto::Cipher &arg0);
		FingerprintManager_CryptoObject(javax::crypto::Mac &arg0);
		FingerprintManager_CryptoObject() = default;
		
		// Methods
		QAndroidJniObject getCipher();
		QAndroidJniObject getMac();
		QAndroidJniObject getSignature();
	};
} // namespace android::hardware::fingerprint

