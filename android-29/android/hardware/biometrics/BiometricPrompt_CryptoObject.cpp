#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"
#include "./BiometricPrompt_CryptoObject.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(java::security::Signature &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.__jniObject().object()
		);
	}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Cipher &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object()
		);
	}
	BiometricPrompt_CryptoObject::BiometricPrompt_CryptoObject(javax::crypto::Mac &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject BiometricPrompt_CryptoObject::getCipher()
	{
		return __thiz.callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	QAndroidJniObject BiometricPrompt_CryptoObject::getMac()
	{
		return __thiz.callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	QAndroidJniObject BiometricPrompt_CryptoObject::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::biometrics

