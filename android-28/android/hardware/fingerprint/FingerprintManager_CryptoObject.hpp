#pragma once

#include "../../../JObject.hpp"

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
	class FingerprintManager_CryptoObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintManager_CryptoObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_CryptoObject(QJniObject obj);
		
		// Constructors
		FingerprintManager_CryptoObject(java::security::Signature arg0);
		FingerprintManager_CryptoObject(javax::crypto::Cipher arg0);
		FingerprintManager_CryptoObject(javax::crypto::Mac arg0);
		
		// Methods
		javax::crypto::Cipher getCipher();
		javax::crypto::Mac getMac();
		java::security::Signature getSignature();
	};
} // namespace android::hardware::fingerprint

