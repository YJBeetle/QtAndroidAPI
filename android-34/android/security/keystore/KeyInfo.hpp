#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./KeyInfo.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray KeyInfo::getBlockModes() const
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray KeyInfo::getDigests() const
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray KeyInfo::getEncryptionPaddings() const
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline jint KeyInfo::getKeySize() const
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	inline java::util::Date KeyInfo::getKeyValidityForConsumptionEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyInfo::getKeyValidityForOriginationEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyInfo::getKeyValidityStart() const
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	inline JString KeyInfo::getKeystoreAlias() const
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	inline jint KeyInfo::getOrigin() const
	{
		return callMethod<jint>(
			"getOrigin",
			"()I"
		);
	}
	inline jint KeyInfo::getPurposes() const
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	inline jint KeyInfo::getRemainingUsageCount() const
	{
		return callMethod<jint>(
			"getRemainingUsageCount",
			"()I"
		);
	}
	inline jint KeyInfo::getSecurityLevel() const
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"()I"
		);
	}
	inline JArray KeyInfo::getSignaturePaddings() const
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline jint KeyInfo::getUserAuthenticationType() const
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	inline jint KeyInfo::getUserAuthenticationValidityDurationSeconds() const
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	inline jboolean KeyInfo::isInsideSecureHardware() const
	{
		return callMethod<jboolean>(
			"isInsideSecureHardware",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isInvalidatedByBiometricEnrollment() const
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isTrustedUserPresenceRequired() const
	{
		return callMethod<jboolean>(
			"isTrustedUserPresenceRequired",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isUserAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isUserAuthenticationRequirementEnforcedBySecureHardware() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequirementEnforcedBySecureHardware",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isUserAuthenticationValidWhileOnBody() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	inline jboolean KeyInfo::isUserConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::keystore;
#endif
