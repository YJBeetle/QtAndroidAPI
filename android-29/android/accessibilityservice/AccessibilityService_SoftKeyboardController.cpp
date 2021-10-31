#include "./AccessibilityService.hpp"
#include "../os/Handler.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityService_SoftKeyboardController::AccessibilityService_SoftKeyboardController(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.object()
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint AccessibilityService_SoftKeyboardController::getShowMode()
	{
		return callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint arg0)
	{
		return callMethod<jboolean>(
			"setShowMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::accessibilityservice

