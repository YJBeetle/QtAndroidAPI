#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
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
	class KeyGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAlgorithmParameterSpec();
		JString getAttestKeyAlias();
		JByteArray getAttestationChallenge();
		JArray getBlockModes();
		java::util::Date getCertificateNotAfter();
		java::util::Date getCertificateNotBefore();
		java::math::BigInteger getCertificateSerialNumber();
		javax::security::auth::x500::X500Principal getCertificateSubject();
		JArray getDigests();
		JArray getEncryptionPaddings();
		jint getKeySize();
		java::util::Date getKeyValidityForConsumptionEnd();
		java::util::Date getKeyValidityForOriginationEnd();
		java::util::Date getKeyValidityStart();
		JString getKeystoreAlias();
		jint getMaxUsageCount();
		jint getPurposes();
		JArray getSignaturePaddings();
		jint getUserAuthenticationType();
		jint getUserAuthenticationValidityDurationSeconds();
		jboolean isDevicePropertiesAttestationIncluded();
		jboolean isDigestsSpecified();
		jboolean isInvalidatedByBiometricEnrollment();
		jboolean isRandomizedEncryptionRequired();
		jboolean isStrongBoxBacked();
		jboolean isUnlockedDeviceRequired();
		jboolean isUserAuthenticationRequired();
		jboolean isUserAuthenticationValidWhileOnBody();
		jboolean isUserConfirmationRequired();
		jboolean isUserPresenceRequired();
	};
} // namespace android::security::keystore

