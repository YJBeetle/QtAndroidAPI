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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAlgorithmParameterSpec() const;
		JString getAttestKeyAlias() const;
		JByteArray getAttestationChallenge() const;
		JArray getBlockModes() const;
		java::util::Date getCertificateNotAfter() const;
		java::util::Date getCertificateNotBefore() const;
		java::math::BigInteger getCertificateSerialNumber() const;
		javax::security::auth::x500::X500Principal getCertificateSubject() const;
		JArray getDigests() const;
		JArray getEncryptionPaddings() const;
		jint getKeySize() const;
		java::util::Date getKeyValidityForConsumptionEnd() const;
		java::util::Date getKeyValidityForOriginationEnd() const;
		java::util::Date getKeyValidityStart() const;
		JString getKeystoreAlias() const;
		jint getMaxUsageCount() const;
		jint getPurposes() const;
		JArray getSignaturePaddings() const;
		jint getUserAuthenticationType() const;
		jint getUserAuthenticationValidityDurationSeconds() const;
		jboolean isDevicePropertiesAttestationIncluded() const;
		jboolean isDigestsSpecified() const;
		jboolean isInvalidatedByBiometricEnrollment() const;
		jboolean isRandomizedEncryptionRequired() const;
		jboolean isStrongBoxBacked() const;
		jboolean isUnlockedDeviceRequired() const;
		jboolean isUserAuthenticationRequired() const;
		jboolean isUserAuthenticationValidWhileOnBody() const;
		jboolean isUserConfirmationRequired() const;
		jboolean isUserPresenceRequired() const;
	};
} // namespace android::security::keystore

