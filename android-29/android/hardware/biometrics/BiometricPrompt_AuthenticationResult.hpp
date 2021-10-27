#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult : public __JniBaseClass
	{
	public:
		// Fields
		
		BiometricPrompt_AuthenticationResult(QAndroidJniObject obj);
		// Constructors
		BiometricPrompt_AuthenticationResult() = default;
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace android::hardware::biometrics

