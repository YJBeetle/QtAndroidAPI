#include "./BiometricManager_Strings.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QJniObject forward
	BiometricManager_Strings::BiometricManager_Strings(QJniObject obj) : __JniBaseClass(obj) {}
	
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

