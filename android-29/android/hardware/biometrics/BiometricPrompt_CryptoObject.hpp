#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Signature;
}
namespace __jni_impl::javax::crypto
{
	class Cipher;
}
namespace __jni_impl::javax::crypto
{
	class Mac;
}

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::Signature arg0);
		void __constructor(__jni_impl::javax::crypto::Cipher arg0);
		void __constructor(__jni_impl::javax::crypto::Mac arg0);
		
		// Methods
		QAndroidJniObject getCipher();
		QAndroidJniObject getMac();
		QAndroidJniObject getSignature();
	};
} // namespace __jni_impl::android::hardware::biometrics

#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	// Fields
	
	// Constructors
	void BiometricPrompt_CryptoObject::__constructor(__jni_impl::java::security::Signature arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.__jniObject().object()
		);
	}
	void BiometricPrompt_CryptoObject::__constructor(__jni_impl::javax::crypto::Cipher arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object()
		);
	}
	void BiometricPrompt_CryptoObject::__constructor(__jni_impl::javax::crypto::Mac arg0)
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
} // namespace __jni_impl::android::hardware::biometrics

namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject : public __jni_impl::android::hardware::biometrics::BiometricPrompt_CryptoObject
	{
	public:
		BiometricPrompt_CryptoObject(QAndroidJniObject obj) { __thiz = obj; }
		BiometricPrompt_CryptoObject(__jni_impl::java::security::Signature arg0)
		{
			__constructor(
				arg0);
		}
		BiometricPrompt_CryptoObject(__jni_impl::javax::crypto::Cipher arg0)
		{
			__constructor(
				arg0);
		}
		BiometricPrompt_CryptoObject(__jni_impl::javax::crypto::Mac arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::hardware::biometrics

