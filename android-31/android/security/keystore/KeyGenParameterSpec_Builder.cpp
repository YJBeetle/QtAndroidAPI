#include "./KeyGenParameterSpec.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyGenParameterSpec_Builder.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.security.keystore.KeyGenParameterSpec$Builder",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::security::keystore::KeyGenParameterSpec KeyGenParameterSpec_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyGenParameterSpec;"
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setAlgorithmParameterSpec(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setAttestKeyAlias(jstring arg0)
	{
		return callObjectMethod(
			"setAttestKeyAlias",
			"(Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setAttestationChallenge(jbyteArray arg0)
	{
		return callObjectMethod(
			"setAttestationChallenge",
			"([B)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setBlockModes(jarray arg0)
	{
		return callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateNotAfter(java::util::Date arg0)
	{
		return callObjectMethod(
			"setCertificateNotAfter",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateNotBefore(java::util::Date arg0)
	{
		return callObjectMethod(
			"setCertificateNotBefore",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateSerialNumber(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"setCertificateSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateSubject(javax::security::auth::x500::X500Principal arg0)
	{
		return callObjectMethod(
			"setCertificateSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setDevicePropertiesAttestationIncluded(jboolean arg0)
	{
		return callObjectMethod(
			"setDevicePropertiesAttestationIncluded",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setDigests(jarray arg0)
	{
		return callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setEncryptionPaddings(jarray arg0)
	{
		return callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0)
	{
		return callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setIsStrongBoxBacked(jboolean arg0)
	{
		return callObjectMethod(
			"setIsStrongBoxBacked",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeySize(jint arg0)
	{
		return callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityStart(java::util::Date arg0)
	{
		return callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setMaxUsageCount(jint arg0)
	{
		return callObjectMethod(
			"setMaxUsageCount",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setRandomizedEncryptionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setSignaturePaddings(jarray arg0)
	{
		return callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUnlockedDeviceRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationParameters(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setUserAuthenticationParameters",
			"(II)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0,
			arg1
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0)
	{
		return callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserConfirmationRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserPresenceRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
} // namespace android::security::keystore
