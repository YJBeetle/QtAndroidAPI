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
		
		KeyGenParameterSpec(QAndroidJniObject obj);
		// Constructors
		KeyGenParameterSpec() = default;
		
		// Methods
		QAndroidJniObject getAlgorithmParameterSpec();
		jbyteArray getAttestationChallenge();
		jarray getBlockModes();
		QAndroidJniObject getCertificateNotAfter();
		QAndroidJniObject getCertificateNotBefore();
		QAndroidJniObject getCertificateSerialNumber();
		QAndroidJniObject getCertificateSubject();
		jarray getDigests();
		jarray getEncryptionPaddings();
		jint getKeySize();
		QAndroidJniObject getKeyValidityForConsumptionEnd();
		QAndroidJniObject getKeyValidityForOriginationEnd();
		QAndroidJniObject getKeyValidityStart();
		jstring getKeystoreAlias();
		jint getPurposes();
		jarray getSignaturePaddings();
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

