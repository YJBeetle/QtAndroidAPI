#include "../../../JString.hpp"
#include "./BiometricManager_Strings.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// QJniObject forward
	BiometricManager_Strings::BiometricManager_Strings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString BiometricManager_Strings::getButtonLabel() const
	{
		return callObjectMethod(
			"getButtonLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricManager_Strings::getPromptMessage() const
	{
		return callObjectMethod(
			"getPromptMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString BiometricManager_Strings::getSettingName() const
	{
		return callObjectMethod(
			"getSettingName",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::hardware::biometrics

