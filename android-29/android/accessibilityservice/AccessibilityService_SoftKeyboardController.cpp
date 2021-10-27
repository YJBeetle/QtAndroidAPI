#include "./AccessibilityService.hpp"
#include "../os/Handler.hpp"
#include "./AccessibilityService_SoftKeyboardController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	AccessibilityService_SoftKeyboardController::AccessibilityService_SoftKeyboardController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint AccessibilityService_SoftKeyboardController::getShowMode()
	{
		return __thiz.callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityService_SoftKeyboardController::setShowMode(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setShowMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::accessibilityservice

