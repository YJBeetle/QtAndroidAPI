#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "./KeyInfo.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyInfo::KeyInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray KeyInfo::getBlockModes()
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyInfo::getDigests()
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyInfo::getEncryptionPaddings()
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	jint KeyInfo::getKeySize()
	{
		return callMethod<jint>(
			"getKeySize",
			"()I"
		);
	}
	java::util::Date KeyInfo::getKeyValidityForConsumptionEnd()
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyInfo::getKeyValidityForOriginationEnd()
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyInfo::getKeyValidityStart()
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	JString KeyInfo::getKeystoreAlias()
	{
		return callObjectMethod(
			"getKeystoreAlias",
			"()Ljava/lang/String;"
		);
	}
	jint KeyInfo::getOrigin()
	{
		return callMethod<jint>(
			"getOrigin",
			"()I"
		);
	}
	jint KeyInfo::getPurposes()
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	JArray KeyInfo::getSignaturePaddings()
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	jint KeyInfo::getUserAuthenticationType()
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	jint KeyInfo::getUserAuthenticationValidityDurationSeconds()
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyInfo::isInsideSecureHardware()
	{
		return callMethod<jboolean>(
			"isInsideSecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isInvalidatedByBiometricEnrollment()
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyInfo::isTrustedUserPresenceRequired()
	{
		return callMethod<jboolean>(
			"isTrustedUserPresenceRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequired()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationRequirementEnforcedBySecureHardware()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequirementEnforcedBySecureHardware",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserAuthenticationValidWhileOnBody()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyInfo::isUserConfirmationRequired()
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

