#pragma once

#include "../../../JArray.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./KeyProtection.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray KeyProtection::getBlockModes() const
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray KeyProtection::getDigests() const
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray KeyProtection::getEncryptionPaddings() const
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline java::util::Date KeyProtection::getKeyValidityForConsumptionEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyProtection::getKeyValidityForOriginationEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date KeyProtection::getKeyValidityStart() const
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	inline jint KeyProtection::getPurposes() const
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	inline JArray KeyProtection::getSignaturePaddings() const
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	inline jint KeyProtection::getUserAuthenticationType() const
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	inline jint KeyProtection::getUserAuthenticationValidityDurationSeconds() const
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	inline jboolean KeyProtection::isDigestsSpecified() const
	{
		return callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isInvalidatedByBiometricEnrollment() const
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isRandomizedEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isUnlockedDeviceRequired() const
	{
		return callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isUserAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isUserAuthenticationValidWhileOnBody() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isUserConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	inline jboolean KeyProtection::isUserPresenceRequired() const
	{
		return callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

// Base class headers

