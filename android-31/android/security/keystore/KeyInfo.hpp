#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
namespace java::util
{
	class Date;
}

namespace android::security::keystore
{
	class KeyInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getBlockModes();
		JArray getDigests();
		JArray getEncryptionPaddings();
		jint getKeySize();
		java::util::Date getKeyValidityForConsumptionEnd();
		java::util::Date getKeyValidityForOriginationEnd();
		java::util::Date getKeyValidityStart();
		JString getKeystoreAlias();
		jint getOrigin();
		jint getPurposes();
		jint getRemainingUsageCount();
		jint getSecurityLevel();
		JArray getSignaturePaddings();
		jint getUserAuthenticationType();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isInsideSecureHardware();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isTrustedUserPresenceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationRequirementEnforcedBySecureHardware();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
	};
} // namespace android::security::keystore

