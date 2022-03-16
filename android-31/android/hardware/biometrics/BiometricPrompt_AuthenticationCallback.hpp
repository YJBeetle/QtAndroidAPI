#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult;
}
class JString;

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_AuthenticationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_AuthenticationCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		BiometricPrompt_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, JString arg1) const;
		void onAuthenticationFailed() const;
		void onAuthenticationHelp(jint arg0, JString arg1) const;
		void onAuthenticationSucceeded(android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0) const;
	};
} // namespace android::hardware::biometrics

