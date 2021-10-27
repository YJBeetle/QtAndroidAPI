#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityButtonController;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAvailabilityChanged(__jni_impl::android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1);
		void onClicked(__jni_impl::android::accessibilityservice::AccessibilityButtonController arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "./AccessibilityButtonController.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void AccessibilityButtonController_AccessibilityButtonCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityButtonController$AccessibilityButtonCallback",
			"()V"
		);
	}
	
	// Methods
	void AccessibilityButtonController_AccessibilityButtonCallback::onAvailabilityChanged(__jni_impl::android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onAvailabilityChanged",
			"(Landroid/accessibilityservice/AccessibilityButtonController;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityButtonController_AccessibilityButtonCallback::onClicked(__jni_impl::android::accessibilityservice::AccessibilityButtonController arg0)
	{
		__thiz.callMethod<void>(
			"onClicked",
			"(Landroid/accessibilityservice/AccessibilityButtonController;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback : public __jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback
	{
	public:
		AccessibilityButtonController_AccessibilityButtonCallback(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityButtonController_AccessibilityButtonCallback()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

