#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_AuthenticationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_AuthenticationCallback(QJniObject obj);
		
		// Constructors
		BiometricPrompt_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, jstring arg1);
		void onAuthenticationFailed();
		void onAuthenticationHelp(jint arg0, jstring arg1);
		void onAuthenticationSucceeded(android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0);
	};
} // namespace android::hardware::biometrics

