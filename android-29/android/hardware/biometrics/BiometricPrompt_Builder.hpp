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
		
		BiometricPrompt_Builder(QAndroidJniObject obj);
		// Constructors
		BiometricPrompt_Builder(android::content::Context &arg0);
		BiometricPrompt_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setConfirmationRequired(jboolean arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setDeviceCredentialAllowed(jboolean arg0);
		QAndroidJniObject setNegativeButton(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject setNegativeButton(const QString &arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject setSubtitle(jstring arg0);
		QAndroidJniObject setSubtitle(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace android::hardware::biometrics

