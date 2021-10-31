#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class KeyGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenParameterSpec(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getAlgorithmParameterSpec();
		jbyteArray getAttestationChallenge();
		jarray getBlockModes();
		java::util::Date getCertificateNotAfter();
		java::util::Date getCertificateNotBefore();
		java::math::BigInteger getCertificateSerialNumber();
		javax::security::auth::x500::X500Principal getCertificateSubject();
		jarray getDigests();
		jarray getEncryptionPaddings();
		jint getKeySize();
		java::util::Date getKeyValidityForConsumptionEnd();
		java::util::Date getKeyValidityForOriginationEnd();
		java::util::Date getKeyValidityStart();
		jstring getKeystoreAlias();
		jint getPurposes();
		jarray getSignaturePaddings();
		jint getUserAuthenticationType();
		jint getUserAuthenticationValidityDurationSeconds();
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

