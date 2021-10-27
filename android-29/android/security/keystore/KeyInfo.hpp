#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYINFO
#define ANDROID_SECURITY_KEYSTORE_KEYINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::security::keystore
{
	class KeyInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getBlockModes();
		jarray getDigests();
		jarray getEncryptionPaddings();
		jint getKeySize();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		QAndroidJniObject getKeyValidityStart();
		jstring getKeystoreAlias();
		jint getOrigin();
		jint getPurposes();
		jarray getSignaturePaddings();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isInsideSecureHardware();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isTrustedUserPresenceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationRequirementEnforcedBySecureHardware();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
	};
} // namespace __jni_impl::android::security::keystore

#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyInfo",
			"(V)V");
	}
	
	// Methods
	jarray KeyInfo::getBlockModes()
	{
		return __thiz.callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyInfo::getDigests()
	{
		return __thiz.callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyInfo::getEncryptionPaddings()
	{
		return __thiz.callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyInfo::getKeySize()
	{
		return __thiz.callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	QAndroidJniObject KeyInfo::getKeyValidityForConsumptionEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyInfo::getKeyValidityForOriginationEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyInfo::getKeyValidityStart()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	jstring KeyInfo::getKeystoreAlias()
	{
		return __thiz.callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyInfo::getOrigin()
	{
		return __thiz.callMethod<jint>(
			"getOrigin",
			"()I"
		);
	}
	jint KeyInfo::getPurposes()
	{
		return __thiz.callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	jarray KeyInfo::getSignaturePaddings()
	{
		return __thiz.callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyInfo::getUserAuthenticationValidityDurationSeconds()
	{
		return __thiz.callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyInfo::isInsideSecureHardware()
	{
		return __thiz.callMethod<jboolean>(
			"isInsideSecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isInvalidatedByBiometricEnrollment()
	{
		return __thiz.callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyInfo::isTrustedUserPresenceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isTrustedUserPresenceRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequirementEnforcedBySecureHardware()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequirementEnforcedBySecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationValidWhileOnBody()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserConfirmationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyInfo : public __jni_impl::android::security::keystore::KeyInfo
	{
	public:
		KeyInfo(QAndroidJniObject obj) { __thiz = obj; }
		KeyInfo()
		{
			__constructor();
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYINFO

