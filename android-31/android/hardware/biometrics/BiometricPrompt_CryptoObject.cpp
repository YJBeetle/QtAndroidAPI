#include "../../security/identity/IdentityCredential.hpp"
#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"
#include "./BiometricPrompt_CryptoObject.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QAndroidJniObject forward
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(android::security::identity::IdentityCredential arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Landroid/security/identity/IdentityCredential;)V",
			arg0.object()
		) {}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(java::security::Signature arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.object()
		) {}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.object()
		) {}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Mac arg0)
		: JObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.object()
		) {}
	
	// Methods
	javax::crypto::Cipher BiometricPrompt_CryptoObject::getCipher()
	{
		return callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	android::security::identity::IdentityCredential BiometricPrompt_CryptoObject::getIdentityCredential()
	{
		return callObjectMethod(
			"getIdentityCredential",
			"()Landroid/security/identity/IdentityCredential;"
		);
	}
	javax::crypto::Mac BiometricPrompt_CryptoObject::getMac()
	{
		return callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	java::security::Signature BiometricPrompt_CryptoObject::getSignature()
	{
		return callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::biometrics

