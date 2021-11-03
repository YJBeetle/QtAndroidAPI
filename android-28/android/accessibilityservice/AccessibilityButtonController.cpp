#include "./AccessibilityButtonController_AccessibilityButtonCallback.hpp"
#include "../os/Handler.hpp"
#include "./AccessibilityButtonController.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QAndroidJniObject forward
	AccessibilityButtonController::AccessibilityButtonController(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AccessibilityButtonController::isAccessibilityButtonAvailable()
	{
		return callMethod<jboolean>(
			"isAccessibilityButtonAvailable",
			"()Z"
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.object()
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AccessibilityButtonController::unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		callMethod<void>(
			"unregisterAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

