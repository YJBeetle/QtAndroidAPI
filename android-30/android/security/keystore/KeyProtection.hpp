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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyProtection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyProtection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getBlockModes();
		JArray getDigests();
		JArray getEncryptionPaddings();
		java::util::Date getKeyValidityForConsumptionEnd();
		java::util::Date getKeyValidityForOriginationEnd();
		java::util::Date getKeyValidityStart();
		jint getPurposes();
		JArray getSignaturePaddings();
		jint getUserAuthenticationType();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isDigestsSpecified();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isRandomizedEncryptionRequired();
		jboolean isUnlockedDeviceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
		jboolean isUserPresenceRequired();
	};
} // namespace android::security::keystore

