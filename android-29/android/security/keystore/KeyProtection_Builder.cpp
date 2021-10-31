#include "./KeyProtection.hpp"
#include "../../../java/util/Date.hpp"
#include "./KeyProtection_Builder.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	KeyProtection_Builder::KeyProtection_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyProtection_Builder::KeyProtection_Builder(jint arg0)
		: __JniBaseClass(
			"android.security.keystore.KeyProtection$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject KeyProtection_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyProtection;"
		);
	}
	QAndroidJniObject KeyProtection_Builder::setBlockModes(jarray arg0)
	{
		return callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setDigests(jarray arg0)
	{
		return callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setEncryptionPaddings(jarray arg0)
	{
		return callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0)
	{
		return callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setKeyValidityStart(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyProtection_Builder::setRandomizedEncryptionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setSignaturePaddings(jarray arg0)
	{
		return callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUnlockedDeviceRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserConfirmationRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyProtection_Builder::setUserPresenceRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
} // namespace android::security::keystore
