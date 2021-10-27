#include "./AccessibilityButtonController.hpp"
#include "./AccessibilityButtonController_AccessibilityButtonCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	AccessibilityButtonController_AccessibilityButtonCallback::AccessibilityButtonController_AccessibilityButtonCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessibilityButtonController_AccessibilityButtonCallback::AccessibilityButtonController_AccessibilityButtonCallback()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityButtonController$AccessibilityButtonCallback",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityButtonController_AccessibilityButtonCallback::onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onAvailabilityChanged",
			"(Landroid/accessibilityservice/AccessibilityButtonController;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityButtonController_AccessibilityButtonCallback::onClicked(android::accessibilityservice::AccessibilityButtonController arg0)
	{
		__thiz.callMethod<void>(
			"onClicked",
			"(Landroid/accessibilityservice/AccessibilityButtonController;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accessibilityservice

