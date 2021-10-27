#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK
#define ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCancelled(__jni_impl::android::accessibilityservice::GestureDescription arg0);
		void onCompleted(__jni_impl::android::accessibilityservice::GestureDescription arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "GestureDescription.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void AccessibilityService_GestureResultCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService$GestureResultCallback",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityService_GestureResultCallback::onCancelled(__jni_impl::android::accessibilityservice::GestureDescription arg0)
	{
		__thiz.callMethod<void>(
			"onCancelled",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_GestureResultCallback::onCompleted(__jni_impl::android::accessibilityservice::GestureDescription arg0)
	{
		__thiz.callMethod<void>(
			"onCompleted",
			"(Landroid/accessibilityservice/GestureDescription;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback : public __jni_impl::android::accessibilityservice::AccessibilityService_GestureResultCallback
	{
	public:
		AccessibilityService_GestureResultCallback(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityService_GestureResultCallback()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_GESTURERESULTCALLBACK

