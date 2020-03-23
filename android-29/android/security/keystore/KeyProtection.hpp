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
		QAndroidJniObject getKeyValidityStart();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		jint getPurposes();
		QAndroidJniObject getDigests();
		jboolean isDigestsSpecified();
		QAndroidJniObject getEncryptionPaddings();
		QAndroidJniObject getSignaturePaddings();
		QAndroidJniObject getBlockModes();
		jboolean isRandomizedEncryptionRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserConfirmationRequired();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isUserPresenceRequired();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isUnlockedDeviceRequired();
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
	QAndroidJniObject KeyProtection::getKeyValidityStart()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject KeyProtection::getKeyValidityForConsumptionEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject KeyProtection::getKeyValidityForOriginationEnd()
	{
		return __thiz.callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;");
	}
	jint KeyProtection::getPurposes()
	{
		return __thiz.callMethod<jint>(
			"getPurposes",
			"()I");
	}
	QAndroidJniObject KeyProtection::getDigests()
	{
		return __thiz.callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;");
	}
	jboolean KeyProtection::isDigestsSpecified()
	{
		return __thiz.callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z");
	}
	QAndroidJniObject KeyProtection::getEncryptionPaddings()
	{
		return __thiz.callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject KeyProtection::getSignaturePaddings()
	{
		return __thiz.callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject KeyProtection::getBlockModes()
	{
		return __thiz.callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;");
	}
	jboolean KeyProtection::isRandomizedEncryptionRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z");
	}
	jboolean KeyProtection::isUserAuthenticationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z");
	}
	jboolean KeyProtection::isUserConfirmationRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z");
	}
	jint KeyProtection::getUserAuthenticationValidityDurationSeconds()
	{
		return __thiz.callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I");
	}
	jboolean KeyProtection::isUserPresenceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z");
	}
	jboolean KeyProtection::isUserAuthenticationValidWhileOnBody()
	{
		return __thiz.callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z");
	}
	jboolean KeyProtection::isInvalidatedByBiometricEnrollment()
	{
		return __thiz.callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z");
	}
	jboolean KeyProtection::isUnlockedDeviceRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z");
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

