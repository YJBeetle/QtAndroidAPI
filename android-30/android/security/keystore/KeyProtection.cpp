#include "../../../JArray.hpp"
#include "../../../java/util/Date.hpp"
#include "./KeyProtection.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	KeyProtection::KeyProtection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray KeyProtection::getBlockModes()
	{
		return callObjectMethod(
			"getBlockModes",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyProtection::getDigests()
	{
		return callObjectMethod(
			"getDigests",
			"()[Ljava/lang/String;"
		);
	}
	JArray KeyProtection::getEncryptionPaddings()
	{
		return callObjectMethod(
			"getEncryptionPaddings",
			"()[Ljava/lang/String;"
		);
	}
	java::util::Date KeyProtection::getKeyValidityForConsumptionEnd()
	{
		return callObjectMethod(
			"getKeyValidityForConsumptionEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyProtection::getKeyValidityForOriginationEnd()
	{
		return callObjectMethod(
			"getKeyValidityForOriginationEnd",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date KeyProtection::getKeyValidityStart()
	{
		return callObjectMethod(
			"getKeyValidityStart",
			"()Ljava/util/Date;"
		);
	}
	jint KeyProtection::getPurposes()
	{
		return callMethod<jint>(
			"getPurposes",
			"()I"
		);
	}
	JArray KeyProtection::getSignaturePaddings()
	{
		return callObjectMethod(
			"getSignaturePaddings",
			"()[Ljava/lang/String;"
		);
	}
	jint KeyProtection::getUserAuthenticationType()
	{
		return callMethod<jint>(
			"getUserAuthenticationType",
			"()I"
		);
	}
	jint KeyProtection::getUserAuthenticationValidityDurationSeconds()
	{
		return callMethod<jint>(
			"getUserAuthenticationValidityDurationSeconds",
			"()I"
		);
	}
	jboolean KeyProtection::isDigestsSpecified()
	{
		return callMethod<jboolean>(
			"isDigestsSpecified",
			"()Z"
		);
	}
	jboolean KeyProtection::isInvalidatedByBiometricEnrollment()
	{
		return callMethod<jboolean>(
			"isInvalidatedByBiometricEnrollment",
			"()Z"
		);
	}
	jboolean KeyProtection::isRandomizedEncryptionRequired()
	{
		return callMethod<jboolean>(
			"isRandomizedEncryptionRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUnlockedDeviceRequired()
	{
		return callMethod<jboolean>(
			"isUnlockedDeviceRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserAuthenticationRequired()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserAuthenticationValidWhileOnBody()
	{
		return callMethod<jboolean>(
			"isUserAuthenticationValidWhileOnBody",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserConfirmationRequired()
	{
		return callMethod<jboolean>(
			"isUserConfirmationRequired",
			"()Z"
		);
	}
	jboolean KeyProtection::isUserPresenceRequired()
	{
		return callMethod<jboolean>(
			"isUserPresenceRequired",
			"()Z"
		);
	}
} // namespace android::security::keystore

