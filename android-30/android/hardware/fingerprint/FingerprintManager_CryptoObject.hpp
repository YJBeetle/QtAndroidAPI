#pragma once

#include "../../../java/security/Signature.def.hpp"
#include "../../../javax/crypto/Cipher.def.hpp"
#include "../../../javax/crypto/Mac.def.hpp"
#include "./FingerprintManager_CryptoObject.def.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	inline FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(java::security::Signature arg0)
		: JObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.object()
		) {}
	inline FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Cipher arg0)
		: JObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.object()
		) {}
	inline FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Mac arg0)
		: JObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.object()
		) {}
	
	// Methods
	inline javax::crypto::Cipher FingerprintManager_CryptoObject::getCipher() const
	{
		return callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	inline javax::crypto::Mac FingerprintManager_CryptoObject::getMac() const
	{
		return callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	inline java::security::Signature FingerprintManager_CryptoObject::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::fingerprint

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::fingerprint;
#endif
