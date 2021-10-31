#include "./KeyProtection.hpp"
#include "../../../java/util/Date.hpp"
#include "./KeyProtection_Builder.hpp"

namespace android::security::keystore
{
	// Fields
	
	KeyProtection_Builder::KeyProtection_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyProtection_Builder::KeyProtection_Builder(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.KeyProtection$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject KeyProtection_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyProtection;"
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
	QAndroidJniObject KeyProtection_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityStart(java::util::Date arg0)
	{
		return __thiz.callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject KeyProtection_Builder::setSignaturePaddings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
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
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationRequired",
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
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyProtection$Builder;",
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
	QAndroidJniObject KeyProtection_Builder::setUserPresenceRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
} // namespace android::security::keystore

