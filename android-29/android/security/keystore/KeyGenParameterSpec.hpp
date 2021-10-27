#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::javax::security::auth::x500
{
	class X500Principal;
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
		jbyteArray getAttestationChallenge();
		jarray getBlockModes();
		QAndroidJniObject getCertificateNotAfter();
		QAndroidJniObject getCertificateNotBefore();
		QAndroidJniObject getCertificateSerialNumber();
		QAndroidJniObject getCertificateSubject();
		jarray getDigests();
		jarray getEncryptionPaddings();
		jint getKeySize();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		QAndroidJniObject getKeyValidityStart();
		jstring getKeystoreAlias();
		jint getPurposes();
		jarray getSignaturePaddings();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isDigestsSpecified();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isRandomizedEncryptionRequired();
		jboolean isStrongBoxBacked();
		jboolean isUnlockedDeviceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
		jboolean isUserPresenceRequired();
	};
} // namespace __jni_impl::android::security::keystore

#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"

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
	jbyteArray KeyGenParameterSpec::getAttestationChallenge()
	{
		return __thiz.callObjectMethod(
			"getAttestationChallenge",
			"()[B"
		).object<jbyteArray>();
	}
	jarray KeyGenParameterSpec::getBlockModes()
	{
		return __thiz.callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateNotAfter()
	{
		return __thiz.callObjectMethod(
			"getCertificateNotAfter",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateNotBefore()
	{
		return __thiz.callObjectMethod(
			"getCertificateNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getCertificateSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject KeyGenParameterSpec::getCertificateSubject()
	{
		return __thiz.callObjectMethod(
			"getCertificateSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jarray KeyGenParameterSpec::getDigests()
	{
		return __thiz.callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyGenParameterSpec::getEncryptionPaddings()
	{
		return __thiz.callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyGenParameterSpec::getKeySize()
	{
		return __thiz.callMethod<jint>(
			"getKeySize",
			"()I"
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
	QAndroidJniObject KeyGenParameterSpec::getKeyValidityStart()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	jstring KeyGenParameterSpec::getKeystoreAlias()
	{
		return __thiz.callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyGenParameterSpec::getPurposes()
	{
		return __thiz.callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	jarray KeyGenParameterSpec::getSignaturePaddings()
	{
		return __thiz.callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyGenParameterSpec::getUserAuthenticationValidityDurationSeconds()
	{
		return __thiz.callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyGenParameterSpec::isDigestsSpecified()
	{
		return __thiz.callMethod<jboolean>(
			"isDigestsSpecified",
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
	jboolean KeyGenParameterSpec::isRandomizedEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isStrongBoxBacked()
	{
		return __thiz.callMethod<jboolean>(
			"isStrongBoxBacked",
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
	jboolean KeyGenParameterSpec::isUserAuthenticationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserAuthenticationValidWhileOnBody()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
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
	jboolean KeyGenParameterSpec::isUserPresenceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserPresenceRequired",
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

