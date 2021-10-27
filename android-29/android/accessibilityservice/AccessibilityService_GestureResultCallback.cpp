#include "./GestureDescription.hpp"
#include "./AccessibilityService_GestureResultCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	AccessibilityService_GestureResultCallback::AccessibilityService_GestureResultCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessibilityService_GestureResultCallback::AccessibilityService_GestureResultCallback()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService$GestureResultCallback",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityService_GestureResultCallback::onCancelled(android::accessibilityservice::GestureDescription arg0)
	{
		__thiz.callMethod<void>(
			"onCancelled",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_GestureResultCallback::onCompleted(android::accessibilityservice::GestureDescription arg0)
	{
		__thiz.callMethod<void>(
			"onCompleted",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accessibilityservice

