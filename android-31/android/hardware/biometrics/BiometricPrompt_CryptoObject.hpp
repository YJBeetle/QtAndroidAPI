#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::security::identity
{
	class IdentityCredential;
}
namespace java::security
{
	class Signature;
}
namespace javax::crypto
{
	class Cipher;
}
namespace javax::crypto
{
	class Mac;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_CryptoObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_CryptoObject(QAndroidJniObject obj);
		
		// Constructors
		BiometricPrompt_CryptoObject(android::security::identity::IdentityCredential arg0);
		BiometricPrompt_CryptoObject(java::security::Signature arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Mac arg0);
		
		// Methods
		javax::crypto::Cipher getCipher();
		android::security::identity::IdentityCredential getIdentityCredential();
		javax::crypto::Mac getMac();
		java::security::Signature getSignature();
	};
} // namespace android::hardware::biometrics

