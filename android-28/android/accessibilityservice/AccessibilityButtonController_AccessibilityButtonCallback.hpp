#pragma once

#include "./AccessibilityButtonController.def.hpp"
#include "./AccessibilityButtonController_AccessibilityButtonCallback.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline AccessibilityButtonController_AccessibilityButtonCallback::AccessibilityButtonController_AccessibilityButtonCallback()
		: JObject(
			"android.accessibilityservice.AccessibilityButtonController$AccessibilityButtonCallback",
			"()V"
		) {}
	
	// Methods
	inline void AccessibilityButtonController_AccessibilityButtonCallback::onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onAvailabilityChanged",
			"(Landroid/accessibilityservice/AccessibilityButtonController;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityButtonController_AccessibilityButtonCallback::onClicked(android::accessibilityservice::AccessibilityButtonController arg0) const
	{
		callMethod<void>(
			"onClicked",
			"(Landroid/accessibilityservice/AccessibilityButtonController;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

