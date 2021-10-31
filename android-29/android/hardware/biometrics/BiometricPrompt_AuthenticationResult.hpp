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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_AuthenticationResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_AuthenticationResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace android::hardware::biometrics

