#include "./BiometricManager_Strings.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QAndroidJniObject forward
	BiometricManager_Strings::BiometricManager_Strings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring BiometricManager_Strings::getButtonLabel()
	{
		return callObjectMethod(
			"getButtonLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring BiometricManager_Strings::getPromptMessage()
	{
		return callObjectMethod(
			"getPromptMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring BiometricManager_Strings::getSettingName()
	{
		return callObjectMethod(
			"getSettingName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::hardware::biometrics

