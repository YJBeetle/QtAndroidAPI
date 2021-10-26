#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC
#define ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::security::keystore
{
	class KeyGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getAlgorithmParameterSpec();
		QAndroidJniObject getCertificateSubject();
		jint getKeySize();
		jboolean isStrongBoxBacked();
		jstring getKeystoreAlias();
		QAndroidJniObject getCertificateSerialNumber();
		QAndroidJniObject getCertificateNotBefore();
		QAndroidJniObject getCertificateNotAfter();
		QAndroidJniObject getKeyValidityStart();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		jint getPurposes();
		jarray getDigests();
		jboolean isDigestsSpecified();
		jarray getEncryptionPaddings();
		jarray getSignaturePaddings();
		jarray getBlockModes();
		jboolean isRandomizedEncryptionRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserConfirmationRequired();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isUserPresenceRequired();
		jbyteArray getAttestationChallenge();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isUnlockedDeviceRequired();
	};
} // namespace __jni_impl::android::security::keystore

#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyGenParameterSpec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyGenParameterSpec",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyGenParameterSpec::getAlgorithmParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateSubject()
	{
		return __thiz.callObjectMethod(
			"getCertificateSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jint KeyGenParameterSpec::getKeySize()
	{
		return __thiz.callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	jboolean KeyGenParameterSpec::isStrongBoxBacked()
	{
		return __thiz.callMethod<jboolean>(
			"isStrongBoxBacked",
			"()Z"
		);
	}
	jstring KeyGenParameterSpec::getKeystoreAlias()
	{
		return __thiz.callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getCertificateSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateNotBefore()
	{
		return __thiz.callObjectMethod(
			"getCertificateNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateNotAfter()
	{
		return __thiz.callObjectMethod(
			"getCertificateNotAfter",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getKeyValidityStart()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getKeyValidityForConsumptionEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getKeyValidityForOriginationEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	jint KeyGenParameterSpec::getPurposes()
	{
		return __thiz.callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	jarray KeyGenParameterSpec::getDigests()
	{
		return __thiz.callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean KeyGenParameterSpec::isDigestsSpecified()
	{
		return __thiz.callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	jarray KeyGenParameterSpec::getEncryptionPaddings()
	{
		return __thiz.callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyGenParameterSpec::getSignaturePaddings()
	{
		return __thiz.callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyGenParameterSpec::getBlockModes()
	{
		return __thiz.callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean KeyGenParameterSpec::isRandomizedEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserAuthenticationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserConfirmationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	jint KeyGenParameterSpec::getUserAuthenticationValidityDurationSeconds()
	{
		return __thiz.callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyGenParameterSpec::isUserPresenceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
	jbyteArray KeyGenParameterSpec::getAttestationChallenge()
	{
		return __thiz.callObjectMethod(
			"getAttestationChallenge",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean KeyGenParameterSpec::isUserAuthenticationValidWhileOnBody()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isInvalidatedByBiometricEnrollment()
	{
		return __thiz.callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUnlockedDeviceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyGenParameterSpec : public __jni_impl::android::security::keystore::KeyGenParameterSpec
	{
	public:
		KeyGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		KeyGenParameterSpec()
		{
			__constructor();
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC

