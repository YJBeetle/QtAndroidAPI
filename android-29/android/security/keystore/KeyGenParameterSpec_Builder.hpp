#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::security::keystore
{
	class KeyGenParameterSpec;
}
class JString;
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
	class KeyGenParameterSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec_Builder(QAndroidJniObject obj);
		
		// Constructors
		KeyGenParameterSpec_Builder(JString arg0, jint arg1);
		
		// Methods
		android::security::keystore::KeyGenParameterSpec build();
		android::security::keystore::KeyGenParameterSpec_Builder setAlgorithmParameterSpec(JObject arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setAttestationChallenge(JByteArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setBlockModes(JArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateNotAfter(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateNotBefore(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateSerialNumber(java::math::BigInteger arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setCertificateSubject(javax::security::auth::x500::X500Principal arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setDigests(JArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setEncryptionPaddings(JArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setInvalidatedByBiometricEnrollment(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setIsStrongBoxBacked(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeySize(jint arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityForConsumptionEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityForOriginationEnd(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setKeyValidityStart(java::util::Date arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setRandomizedEncryptionRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setSignaturePaddings(JArray arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUnlockedDeviceRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationValidWhileOnBody(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserAuthenticationValidityDurationSeconds(jint arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserConfirmationRequired(jboolean arg0);
		android::security::keystore::KeyGenParameterSpec_Builder setUserPresenceRequired(jboolean arg0);
	};
} // namespace android::security::keystore

