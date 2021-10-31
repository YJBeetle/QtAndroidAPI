#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Date;
}

namespace android::security::keystore
{
	class KeyProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyProtection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyProtection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getBlockModes();
		jarray getDigests();
		jarray getEncryptionPaddings();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		QAndroidJniObject getKeyValidityStart();
		jint getPurposes();
		jarray getSignaturePaddings();
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

