#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Date;
}

namespace android::security::keystore
{
	class KeyInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getBlockModes();
		jarray getDigests();
		jarray getEncryptionPaddings();
		jint getKeySize();
		java::util::Date getKeyValidityForConsumptionEnd();
		java::util::Date getKeyValidityForOriginationEnd();
		java::util::Date getKeyValidityStart();
		jstring getKeystoreAlias();
		jint getOrigin();
		jint getPurposes();
		jarray getSignaturePaddings();
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

