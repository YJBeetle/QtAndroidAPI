#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::hardware::biometrics
{
	class BiometricPrompt;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_Builder(QJniObject obj);
		
		// Constructors
		BiometricPrompt_Builder(android::content::Context arg0);
		
		// Methods
		android::hardware::biometrics::BiometricPrompt build();
		android::hardware::biometrics::BiometricPrompt_Builder setAllowedAuthenticators(jint arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setConfirmationRequired(jboolean arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setDescription(jstring arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setDeviceCredentialAllowed(jboolean arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setNegativeButton(jstring arg0, JObject arg1, JObject arg2);
		android::hardware::biometrics::BiometricPrompt_Builder setSubtitle(jstring arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setTitle(jstring arg0);
	};
} // namespace android::hardware::biometrics

