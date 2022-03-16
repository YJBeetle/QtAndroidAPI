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
		KeyInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getBlockModes() const;
		JArray getDigests() const;
		JArray getEncryptionPaddings() const;
		jint getKeySize() const;
		java::util::Date getKeyValidityForConsumptionEnd() const;
		java::util::Date getKeyValidityForOriginationEnd() const;
		java::util::Date getKeyValidityStart() const;
		JString getKeystoreAlias() const;
		jint getOrigin() const;
		jint getPurposes() const;
		jint getRemainingUsageCount() const;
		jint getSecurityLevel() const;
		JArray getSignaturePaddings() const;
		jint getUserAuthenticationType() const;
		jint getUserAuthenticationValidityDurationSeconds() const;
		jboolean isInsideSecureHardware() const;
		jboolean isInvalidatedByBiometricEnrollment() const;
		jboolean isTrustedUserPresenceRequired() const;
		jboolean isUserAuthenticationRequired() const;
		jboolean isUserAuthenticationRequirementEnforcedBySecureHardware() const;
		jboolean isUserAuthenticationValidWhileOnBody() const;
		jboolean isUserConfirmationRequired() const;
	};
} // namespace android::security::keystore

