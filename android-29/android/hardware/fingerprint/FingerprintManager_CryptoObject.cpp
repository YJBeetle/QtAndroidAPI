#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"
#include "./FingerprintManager_CryptoObject.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(java::security::Signature arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.__jniObject().object()
		);
	}
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Cipher arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object()
		);
	}
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Mac arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FingerprintManager_CryptoObject::getCipher()
	{
		return __thiz.callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	QAndroidJniObject FingerprintManager_CryptoObject::getMac()
	{
		return __thiz.callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	QAndroidJniObject FingerprintManager_CryptoObject::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::fingerprint

