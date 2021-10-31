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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyProtection_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyProtection_Builder(QJniObject obj);
		
		// Constructors
		KeyProtection_Builder(jint arg0);
		
		// Methods
		android::security::keystore::KeyProtection build();
		android::security::keystore::KeyProtection_Builder setBlockModes(jarray arg0);
		android::security::keystore::KeyProtection_Builder setDigests(jarray arg0);
		android::security::keystore::KeyProtection_Builder setEncryptionPaddings(jarray arg0);
		android::security::keystore::KeyProtection_Builder setInvalidatedByBiometricEnrollment(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setKeyValidityEnd(java::util::Date arg0);
		android::security::keystore::KeyProtection_Builder setKeyValidityForConsumptionEnd(java::util::Date arg0);
		android::security::keystore::KeyProtection_Builder setKeyValidityForOriginationEnd(java::util::Date arg0);
		android::security::keystore::KeyProtection_Builder setKeyValidityStart(java::util::Date arg0);
		android::security::keystore::KeyProtection_Builder setRandomizedEncryptionRequired(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setSignaturePaddings(jarray arg0);
		android::security::keystore::KeyProtection_Builder setUnlockedDeviceRequired(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setUserAuthenticationRequired(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setUserAuthenticationValidWhileOnBody(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setUserAuthenticationValidityDurationSeconds(jint arg0);
		android::security::keystore::KeyProtection_Builder setUserConfirmationRequired(jboolean arg0);
		android::security::keystore::KeyProtection_Builder setUserPresenceRequired(jboolean arg0);
	};
} // namespace android::security::keystore

