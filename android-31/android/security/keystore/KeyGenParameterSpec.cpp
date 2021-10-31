#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyGenParameterSpec.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyGenParameterSpec::KeyGenParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass KeyGenParameterSpec::getAlgorithmParameterSpec()
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jstring KeyGenParameterSpec::getAttestKeyAlias()
	{
		return callObjectMethod(
			"getAttestKeyAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray KeyGenParameterSpec::getAttestationChallenge()
	{
		return callObjectMethod(
			"getAttestationChallenge",
			"()[B"
		).object<jbyteArray>();
	}
	jarray KeyGenParameterSpec::getBlockModes()
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	java::util::Date KeyGenParameterSpec::getCertificateNotAfter()
	{
		return callObjectMethod(
			"getCertificateNotAfter",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyGenParameterSpec::getCertificateNotBefore()
	{
		return callObjectMethod(
			"getCertificateNotBefore",
			"()Ljava/util/Date;"
		);
	}
	java::math::BigInteger KeyGenParameterSpec::getCertificateSerialNumber()
	{
		return callObjectMethod(
			"getCertificateSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	javax::security::auth::x500::X500Principal KeyGenParameterSpec::getCertificateSubject()
	{
		return callObjectMethod(
			"getCertificateSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jarray KeyGenParameterSpec::getDigests()
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray KeyGenParameterSpec::getEncryptionPaddings()
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyGenParameterSpec::getKeySize()
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	java::util::Date KeyGenParameterSpec::getKeyValidityForConsumptionEnd()
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyGenParameterSpec::getKeyValidityForOriginationEnd()
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyGenParameterSpec::getKeyValidityStart()
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	jstring KeyGenParameterSpec::getKeystoreAlias()
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint KeyGenParameterSpec::getMaxUsageCount()
	{
		return callMethod<jint>(
			"getMaxUsageCount",
			"()I"
		);
	}
	jint KeyGenParameterSpec::getPurposes()
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	jarray KeyGenParameterSpec::getSignaturePaddings()
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint KeyGenParameterSpec::getUserAuthenticationType()
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	jint KeyGenParameterSpec::getUserAuthenticationValidityDurationSeconds()
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyGenParameterSpec::isDevicePropertiesAttestationIncluded()
	{
		return callMethod<jboolean>(
			"isDevicePropertiesAttestationIncluded",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isDigestsSpecified()
	{
		return callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isInvalidatedByBiometricEnrollment()
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isRandomizedEncryptionRequired()
	{
		return callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isStrongBoxBacked()
	{
		return callMethod<jboolean>(
			"isStrongBoxBacked",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUnlockedDeviceRequired()
	{
		return callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserAuthenticationRequired()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserAuthenticationValidWhileOnBody()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserConfirmationRequired()
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	jboolean KeyGenParameterSpec::isUserPresenceRequired()
	{
		return callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

