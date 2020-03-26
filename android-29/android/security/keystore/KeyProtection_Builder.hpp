#pragma once

#ifndef ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_BUILDER
#define ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::security::keystore
{
	class KeyProtection;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::security::keystore
{
	class KeyProtection_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setKeyValidityStart(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityForOriginationEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setKeyValidityForConsumptionEnd(__jni_impl::java::util::Date arg0);
		QAndroidJniObject setDigests(jarray arg0);
		QAndroidJniObject setEncryptionPaddings(jarray arg0);
		QAndroidJniObject setSignaturePaddings(jarray arg0);
		QAndroidJniObject setBlockModes(jarray arg0);
		QAndroidJniObject setRandomizedEncryptionRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationRequired(jboolean arg0);
		QAndroidJniObject setUserConfirmationRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidityDurationSeconds(jint arg0);
		QAndroidJniObject setUserPresenceRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidWhileOnBody(jboolean arg0);
		QAndroidJniObject setInvalidatedByBiometricEnrollment(jboolean arg0);
		QAndroidJniObject setUnlockedDeviceRequired(jboolean arg0);
	};
} // namespace __jni_impl::android::security::keystore

#include "KeyProtection.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::security::keystore
{
	// Fields
	
	// Constructors
	void KeyProtection_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyProtection$Builder",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject KeyProtection_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyProtection;"
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityStart(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForOriginationEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForConsumptionEnd(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setDigests(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setEncryptionPaddings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setSignaturePaddings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setBlockModes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setRandomizedEncryptionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserConfirmationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserPresenceRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUnlockedDeviceRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::security::keystore

namespace android::security::keystore
{
	class KeyProtection_Builder : public __jni_impl::android::security::keystore::KeyProtection_Builder
	{
	public:
		KeyProtection_Builder(QAndroidJniObject obj) { __thiz = obj; }
		KeyProtection_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::security::keystore

#endif // ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_BUILDER

