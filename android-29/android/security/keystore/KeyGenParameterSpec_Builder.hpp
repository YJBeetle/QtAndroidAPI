#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace java::math
{
	class BigInteger;
}
namespace java::util
{
	class Date;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace android::security::keystore
{
	class KeyGenParameterSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec_Builder(QAndroidJniObject obj);
		
		// Constructors
		KeyGenParameterSpec_Builder(jstring arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAlgorithmParameterSpec(__JniBaseClass arg0);
		QAndroidJniObject setAttestationChallenge(jbyteArray arg0);
		QAndroidJniObject setBlockModes(jarray arg0);
		QAndroidJniObject setCertificateNotAfter(java::util::Date arg0);
		QAndroidJniObject setCertificateNotBefore(java::util::Date arg0);
		QAndroidJniObject setCertificateSerialNumber(java::math::BigInteger arg0);
		QAndroidJniObject setCertificateSubject(javax::security::auth::x500::X500Principal arg0);
		QAndroidJniObject setDigests(jarray arg0);
		QAndroidJniObject setEncryptionPaddings(jarray arg0);
		QAndroidJniObject setInvalidatedByBiometricEnrollment(jboolean arg0);
		QAndroidJniObject setIsStrongBoxBacked(jboolean arg0);
		QAndroidJniObject setKeySize(jint arg0);
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

