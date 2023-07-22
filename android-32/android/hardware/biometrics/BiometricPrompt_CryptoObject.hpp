#pragma once

#include "../../security/identity/IdentityCredential.def.hpp"
#include "../../../java/security/Signature.def.hpp"
#include "../../../javax/crypto/Cipher.def.hpp"
#include "../../../javax/crypto/Mac.def.hpp"
#include "./BiometricPrompt_CryptoObject.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	inline BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(android::security::identity::IdentityCredential arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Landroid/security/identity/IdentityCredential;)V",
			arg0.object()
		) {}
	inline BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(java::security::Signature arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.object()
		) {}
	inline BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.object()
		) {}
	inline BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Mac arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.object()
		) {}
	
	// Methods
	inline javax::crypto::Cipher BiometricPrompt_CryptoObject::getCipher() const
	{
		return callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	inline android::security::identity::IdentityCredential BiometricPrompt_CryptoObject::getIdentityCredential() const
	{
		return callObjectMethod(
			"getIdentityCredential",
			"()Landroid/security/identity/IdentityCredential;"
		);
	}
	inline javax::crypto::Mac BiometricPrompt_CryptoObject::getMac() const
	{
		return callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	inline java::security::Signature BiometricPrompt_CryptoObject::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
