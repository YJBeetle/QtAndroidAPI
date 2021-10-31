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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec_Builder(QJniObject obj);
		
		// Constructors
		KeyGenParameterSpec_Builder(jstring arg0, jint arg1);
		
		// Methods
		android::security::keystore::KeyGenParameterSpec build();
		android::security::keystore::KeyGenParameterSpec_Builder setAlgorithmParameterSpec(__JniBaseClass arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setAttestationChallenge(jbyteArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setBlockModes(jarray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateNotAfter(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateNotBefore(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateSerialNumber(java::math::BigInteger arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateSubject(javax::security::auth::x500::X500Principal arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setDigests(jarray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setEncryptionPaddings(jarray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setInvalidatedByBiometricEnrollment(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setIsStrongBoxBacked(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeySize(jint arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityForConsumptionEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityForOriginationEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityStart(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setRandomizedEncryptionRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setSignaturePaddings(jarray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUnlockedDeviceRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationValidWhileOnBody(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationValidityDurationSeconds(jint arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserConfirmationRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserPresenceRequired(jboolean arg0);
	};
} // namespace android::security::keystore

