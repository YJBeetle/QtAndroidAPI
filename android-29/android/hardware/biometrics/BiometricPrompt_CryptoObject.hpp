#pragma once

#include "../../../__JniBaseClass.hpp"

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
		
		BiometricPrompt_CryptoObject(QAndroidJniObject obj);
		// Constructors
		BiometricPrompt_CryptoObject(java::security::Signature arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Cipher arg0);
		BiometricPrompt_CryptoObject(javax::crypto::Mac arg0);
		BiometricPrompt_CryptoObject() = default;
		
		// Methods
		QAndroidJniObject getCipher();
		QAndroidJniObject getMac();
		QAndroidJniObject getSignature();
	};
} // namespace android::hardware::biometrics

