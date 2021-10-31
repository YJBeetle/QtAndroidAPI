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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintManager_CryptoObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_CryptoObject(QAndroidJniObject obj);
		
		// Constructors
		FingerprintManager_CryptoObject(java::security::Signature arg0);
		FingerprintManager_CryptoObject(javax::crypto::Cipher arg0);
		FingerprintManager_CryptoObject(javax::crypto::Mac arg0);
		
		// Methods
		QAndroidJniObject getCipher();
		QAndroidJniObject getMac();
		QAndroidJniObject getSignature();
	};
} // namespace android::hardware::fingerprint

