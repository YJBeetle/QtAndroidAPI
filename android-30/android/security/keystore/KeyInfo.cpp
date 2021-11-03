#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "./KeyInfo.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	KeyInfo::KeyInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray KeyInfo::getBlockModes() const
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyInfo::getDigests() const
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyInfo::getEncryptionPaddings() const
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	jint KeyInfo::getKeySize() const
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	java::util::Date KeyInfo::getKeyValidityForConsumptionEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyInfo::getKeyValidityForOriginationEnd() const
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyInfo::getKeyValidityStart() const
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	JString KeyInfo::getKeystoreAlias() const
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	jint KeyInfo::getOrigin() const
	{
		return callMethod<jint>(
			"getOrigin",
			"()I"
		);
	}
	jint KeyInfo::getPurposes() const
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	JArray KeyInfo::getSignaturePaddings() const
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	jint KeyInfo::getUserAuthenticationType() const
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	jint KeyInfo::getUserAuthenticationValidityDurationSeconds() const
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyInfo::isInsideSecureHardware() const
	{
		return callMethod<jboolean>(
			"isInsideSecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isInvalidatedByBiometricEnrollment() const
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyInfo::isTrustedUserPresenceRequired() const
	{
		return callMethod<jboolean>(
			"isTrustedUserPresenceRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequirementEnforcedBySecureHardware() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequirementEnforcedBySecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationValidWhileOnBody() const
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

