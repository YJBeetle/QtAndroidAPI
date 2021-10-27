#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityButtonController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isAccessibilityButtonAvailable();
		void registerAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
		void registerAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, __jni_impl::android::os::Handler arg1);
		void unregisterAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "AccessibilityButtonController_AccessibilityButtonCallback.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void AccessibilityButtonController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityButtonController",
			"(V)V");
	}
	
	// Methods
	jboolean AccessibilityButtonController::isAccessibilityButtonAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityButtonAvailable",
			"()Z"
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityButtonController::registerAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AccessibilityButtonController::unregisterAccessibilityButtonCallback(__jni_impl::android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAccessibilityButtonCallback",
			"(Landroid/accessibilityservice/AccessibilityButtonController$AccessibilityButtonCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityButtonController : public __jni_impl::android::accessibilityservice::AccessibilityButtonController
	{
	public:
		AccessibilityButtonController(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityButtonController()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

