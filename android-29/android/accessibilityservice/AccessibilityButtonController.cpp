#include "./AccessibilityButtonController_AccessibilityButtonCallback.hpp"
#include "../os/Handler.hpp"
#include "./AccessibilityButtonController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	AccessibilityButtonController::AccessibilityButtonController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean AccessibilityButtonController::isAccessibilityButtonAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityButtonAvailable",
			"()Z"
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AccessibilityButtonController::unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accessibilityservice

