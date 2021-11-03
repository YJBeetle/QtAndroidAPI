#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "./KeyGenParameterSpec.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyGenParameterSpec_Builder.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyGenParameterSpec_Builder::KeyGenParameterSpec_Builder(JString arg0, jint arg1)
		: JObject(
			"android.security.keystore.KeyGenParameterSpec$Builder",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	android::security::keystore::KeyGenParameterSpec KeyGenParameterSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyGenParameterSpec;"
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setAlgorithmParameterSpec(JObject arg0) const
	{
		return callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setAttestationChallenge(JByteArray arg0) const
	{
		return callObjectMethod(
			"setAttestationChallenge",
			"([B)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setBlockModes(JArray arg0) const
	{
		return callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateNotAfter(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setCertificateNotAfter",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateNotBefore(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setCertificateNotBefore",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateSerialNumber(java::math::BigInteger arg0) const
	{
		return callObjectMethod(
			"setCertificateSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setCertificateSubject(javax::security::auth::x500::X500Principal arg0) const
	{
		return callObjectMethod(
			"setCertificateSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setDigests(JArray arg0) const
	{
		return callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setEncryptionPaddings(JArray arg0) const
	{
		return callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0) const
	{
		return callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setIsStrongBoxBacked(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsStrongBoxBacked",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeySize(jint arg0) const
	{
		return callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setKeyValidityStart(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setRandomizedEncryptionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setSignaturePaddings(JArray arg0) const
	{
		return callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUnlockedDeviceRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserConfirmationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
	android::security::keystore::KeyGenParameterSpec_Builder KeyGenParameterSpec_Builder::setUserPresenceRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;",
			arg0
		);
	}
} // namespace android::security::keystore

