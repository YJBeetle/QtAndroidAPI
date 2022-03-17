#pragma once

#include "../../../JString.hpp"
#include "./BiometricManager_Strings.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString BiometricManager_Strings::getButtonLabel() const
	{
		return callObjectMethod(
			"getButtonLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString BiometricManager_Strings::getPromptMessage() const
	{
		return callObjectMethod(
			"getPromptMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString BiometricManager_Strings::getSettingName() const
	{
		return callObjectMethod(
			"getSettingName",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

