#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace java::util
{
	class Date;
}

namespace android::security::keystore
{
	class KeyProtection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyProtection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyProtection(QJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getBlockModes() const;
		JArray getDigests() const;
		JArray getEncryptionPaddings() const;
		java::util::Date getKeyValidityForConsumptionEnd() const;
		java::util::Date getKeyValidityForOriginationEnd() const;
		java::util::Date getKeyValidityStart() const;
		jint getPurposes() const;
		JArray getSignaturePaddings() const;
		jint getUserAuthenticationType() const;
		jint getUserAuthenticationValidityDurationSeconds() const;
		jboolean isDigestsSpecified() const;
		jboolean isInvalidatedByBiometricEnrollment() const;
		jboolean isRandomizedEncryptionRequired() const;
		jboolean isUnlockedDeviceRequired() const;
		jboolean isUserAuthenticationRequired() const;
		jboolean isUserAuthenticationValidWhileOnBody() const;
		jboolean isUserConfirmationRequired() const;
		jboolean isUserPresenceRequired() const;
	};
} // namespace android::security::keystore

