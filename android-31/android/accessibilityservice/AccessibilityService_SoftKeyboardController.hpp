#pragma once

#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./AccessibilityService_SoftKeyboardController.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.object()
		);
	}
	inline void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint AccessibilityService_SoftKeyboardController::getShowMode() const
	{
		return callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	inline jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)Z",
			arg0.object()
		);
	}
	inline jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setShowMode",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AccessibilityService_SoftKeyboardController::switchToInputMethod(JString arg0) const
	{
		return callMethod<jboolean>(
			"switchToInputMethod",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

