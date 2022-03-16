#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_AuthenticationResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_AuthenticationResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::hardware::biometrics::BiometricPrompt_CryptoObject getCryptoObject() const;
	};
} // namespace android::hardware::biometrics

