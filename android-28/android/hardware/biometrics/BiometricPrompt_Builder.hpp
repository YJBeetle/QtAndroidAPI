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
class JString;

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
		android::hardware::biometrics::BiometricPrompt_Builder setDescription(JString arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setNegativeButton(JString arg0, JObject arg1, JObject arg2);
		android::hardware::biometrics::BiometricPrompt_Builder setSubtitle(JString arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setTitle(JString arg0);
	};
} // namespace android::hardware::biometrics

