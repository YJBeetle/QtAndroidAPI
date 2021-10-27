#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYPROTECTION
#define ANDROID_SECURITY_KEYSTORE_KEYPROTECTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::security::keystore
{
	class KeyProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getBlockModes();
		jarray getDigests();
		jarray getEncryptionPaddings();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		QAndroidJniObject getKeyValidityStart();
		jint getPurposes();
		jarray getSignaturePaddings();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isDigestsSpecified();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isRandomizedEncryptionRequired();
		jboolean isUnlockedDeviceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
		jboolean isUserPresenceRequired();
	};
} // namespace __jni_impl::android::security::keystore

#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyProtection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyProtection",
			"(V)V");
	}
	
	// Methods
	jarray KeyProtection::getBlockModes()
	{
		return __thiz.callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyProtection::getDigests()
	{
		return __thiz.callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyProtection::getEncryptionPaddings()
	{
		return __thiz.callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject KeyProtection::getKeyValidityForConsumptionEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyProtection::getKeyValidityForOriginationEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject KeyProtection::getKeyValidityStart()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	jint KeyProtection::getPurposes()
	{
		return __thiz.callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	jarray KeyProtection::getSignaturePaddings()
	{
		return __thiz.callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyProtection::getUserAuthenticationValidityDurationSeconds()
	{
		return __thiz.callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyProtection::isDigestsSpecified()
	{
		return __thiz.callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	jboolean KeyProtection::isInvalidatedByBiometricEnrollment()
	{
		return __thiz.callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyProtection::isRandomizedEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUnlockedDeviceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserAuthenticationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserAuthenticationValidWhileOnBody()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserConfirmationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserPresenceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyProtection : public __jni_impl::android::security::keystore::KeyProtection
	{
	public:
		KeyProtection(QAndroidJniObject obj) { __thiz = obj; }
		KeyProtection()
		{
			__constructor();
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYPROTECTION

