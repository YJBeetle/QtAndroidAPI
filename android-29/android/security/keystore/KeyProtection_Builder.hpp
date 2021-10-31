#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::security::keystore
{
	class KeyProtection;
}
namespace java::util
{
	class Date;
}

namespace android::security::keystore
{
	class KeyProtection_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyProtection_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyProtection_Builder(QAndroidJniObject obj);
		
		// Constructors
		KeyProtection_Builder(jint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBlockModes(jarray arg0);
		QAndroidJniObject setDigests(jarray arg0);
		QAndroidJniObject setEncryptionPaddings(jarray arg0);
		QAndroidJniObject setInvalidatedByBiometricEnrollment(jboolean arg0);
		QAndroidJniObject setKeyValidityEnd(java::util::Date arg0);
		QAndroidJniObject setKeyValidityForConsumptionEnd(java::util::Date arg0);
		QAndroidJniObject setKeyValidityForOriginationEnd(java::util::Date arg0);
		QAndroidJniObject setKeyValidityStart(java::util::Date arg0);
		QAndroidJniObject setRandomizedEncryptionRequired(jboolean arg0);
		QAndroidJniObject setSignaturePaddings(jarray arg0);
		QAndroidJniObject setUnlockedDeviceRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationRequired(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidWhileOnBody(jboolean arg0);
		QAndroidJniObject setUserAuthenticationValidityDurationSeconds(jint arg0);
		QAndroidJniObject setUserConfirmationRequired(jboolean arg0);
		QAndroidJniObject setUserPresenceRequired(jboolean arg0);
	};
} // namespace android::security::keystore

