#include "./AccessibilityService.hpp"
#include "../os/Handler.hpp"
#include "../../JObject.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.object()
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint AccessibilityService_SoftKeyboardController::getShowMode() const
	{
		return callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setShowMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::accessibilityservice

