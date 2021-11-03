#include "../../../JString.hpp"
#include "./BiometricManager_Strings.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QAndroidJniObject forward
	BiometricManager_Strings::BiometricManager_Strings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString BiometricManager_Strings::getButtonLabel()
	{
		return callObjectMethod(
			"getButtonLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricManager_Strings::getPromptMessage()
	{
		return callObjectMethod(
			"getPromptMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricManager_Strings::getSettingName()
	{
		return callObjectMethod(
			"getSettingName",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::hardware::biometrics

