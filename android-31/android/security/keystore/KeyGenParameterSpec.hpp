#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigInteger.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./KeyGenParameterSpec.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject KeyGenParameterSpec::getAlgorithmParameterSpec() const
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline JString KeyGenParameterSpec::getAttestKeyAlias() const
	{
		return callObjectMethod(
			"getAttestKeyAlias",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray KeyGenParameterSpec::getAttestationChallenge() const
	{
		return callObjectMethod(
			"getAttestationChallenge",
			"()[B"
		);
	}
	inline JArray KeyGenParameterSpec::getBlockModes() const
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	inline java::util::Date KeyGenParameterSpec::getCertificateNotAfter() const
	{
		return callObjectMethod(
			"getCertificateNotAfter",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyGenParameterSpec::getCertificateNotBefore() const
	{
		return callObjectMethod(
			"getCertificateNotBefore",
			"()Ljava/util/Date;"
		);
	}
	inline java::math::BigInteger KeyGenParameterSpec::getCertificateSerialNumber() const
	{
		return callObjectMethod(
			"getCertificateSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	inline javax::security::auth::x500::X500Principal KeyGenParameterSpec::getCertificateSubject() const
	{
		return callObjectMethod(
			"getCertificateSubject",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JArray KeyGenParameterSpec::getDigests() const
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray KeyGenParameterSpec::getEncryptionPaddings() const
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline jint KeyGenParameterSpec::getKeySize() const
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	inline java::util::Date KeyGenParameterSpec::getKeyValidityForConsumptionEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyGenParameterSpec::getKeyValidityForOriginationEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyGenParameterSpec::getKeyValidityStart() const
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	inline JString KeyGenParameterSpec::getKeystoreAlias() const
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	inline jint KeyGenParameterSpec::getMaxUsageCount() const
	{
		return callMethod<jint>(
			"getMaxUsageCount",
			"()I"
		);
	}
	inline jint KeyGenParameterSpec::getPurposes() const
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	inline JArray KeyGenParameterSpec::getSignaturePaddings() const
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline jint KeyGenParameterSpec::getUserAuthenticationType() const
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	inline jint KeyGenParameterSpec::getUserAuthenticationValidityDurationSeconds() const
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	inline jboolean KeyGenParameterSpec::isDevicePropertiesAttestationIncluded() const
	{
		return callMethod<jboolean>(
			"isDevicePropertiesAttestationIncluded",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isDigestsSpecified() const
	{
		return callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isInvalidatedByBiometricEnrollment() const
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isRandomizedEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isStrongBoxBacked() const
	{
		return callMethod<jboolean>(
			"isStrongBoxBacked",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isUnlockedDeviceRequired() const
	{
		return callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isUserAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isUserAuthenticationValidWhileOnBody() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isUserConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	inline jboolean KeyGenParameterSpec::isUserPresenceRequired() const
	{
		return callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::keystore;
#endif
