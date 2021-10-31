#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class BiometricPrompt_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricPrompt_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BiometricPrompt_Builder(QAndroidJniObject obj);
		
		// Constructors
		BiometricPrompt_Builder(android::content::Context arg0);
		
		// Methods
		android::hardware::biometrics::BiometricPrompt build();
		android::hardware::biometrics::BiometricPrompt_Builder setDescription(jstring arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setNegativeButton(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		android::hardware::biometrics::BiometricPrompt_Builder setSubtitle(jstring arg0);
		android::hardware::biometrics::BiometricPrompt_Builder setTitle(jstring arg0);
	};
} // namespace android::hardware::biometrics

