#pragma once

#include "./AccessibilityButtonController_AccessibilityButtonCallback.def.hpp"
#include "../os/Handler.def.hpp"
#include "./AccessibilityButtonController.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AccessibilityButtonController::isAccessibilityButtonAvailable() const
	{
		return callMethod<jboolean>(
			"isAccessibilityButtonAvailable",
			"()Z"
		);
	}
	inline void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0) const
	{
		callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.object()
		);
	}
	inline void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AccessibilityButtonController::unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0) const
	{
		callMethod<void>(
			"unregisterAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

