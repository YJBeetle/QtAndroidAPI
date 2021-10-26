#pragma once

#ifndef ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT
#define ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::crypto
{
	class Mac;
}
namespace __jni_impl::javax::crypto
{
	class Cipher;
}
namespace __jni_impl::java::security
{
	class Signature;
}

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::javax::crypto::Mac arg0);
		void __constructor(__jni_impl::javax::crypto::Cipher arg0);
		void __constructor(__jni_impl::java::security::Signature arg0);
		
		// Methods
		QAndroidJniObject getSignature();
		QAndroidJniObject getCipher();
		QAndroidJniObject getMac();
	};
} // namespace __jni_impl::android::hardware::fingerprint

#include "../../../javax/crypto/Mac.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../java/security/Signature.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	void FingerprintManager_CryptoObject::__constructor(__jni_impl::javax::crypto::Mac arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.__jniObject().object()
		);
	}
	void FingerprintManager_CryptoObject::__constructor(__jni_impl::javax::crypto::Cipher arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object()
		);
	}
	void FingerprintManager_CryptoObject::__constructor(__jni_impl::java::security::Signature arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FingerprintManager_CryptoObject::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
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
} // namespace __jni_impl::android::hardware::fingerprint

namespace android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject : public __jni_impl::android::hardware::fingerprint::FingerprintManager_CryptoObject
	{
	public:
		FingerprintManager_CryptoObject(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintManager_CryptoObject(__jni_impl::javax::crypto::Mac arg0)
		{
			__constructor(
				arg0);
		}
		FingerprintManager_CryptoObject(__jni_impl::javax::crypto::Cipher arg0)
		{
			__constructor(
				arg0);
		}
		FingerprintManager_CryptoObject(__jni_impl::java::security::Signature arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::hardware::fingerprint

#endif // ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT

