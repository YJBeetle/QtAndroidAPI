#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER
#define ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean removeOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean setShowMode(jint arg0);
		jint getShowMode();
		void addOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0);
		void addOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "AccessibilityService.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void AccessibilityService_SoftKeyboardController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.AccessibilityService$SoftKeyboardController",
			"(V)V");
	}
	
	// Methods
	jboolean AccessibilityService_SoftKeyboardController::removeOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0)
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
	jint AccessibilityService_SoftKeyboardController::getShowMode()
	{
		return __thiz.callMethod<jint>(
			"getShowMode",
			"()I"
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityService_SoftKeyboardController::addOnShowModeChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnShowModeChangedListener",
			"(Landroid/accessibilityservice/AccessibilityService$SoftKeyboardController$OnShowModeChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class AccessibilityService_SoftKeyboardController : public __jni_impl::android::accessibilityservice::AccessibilityService_SoftKeyboardController
	{
	public:
		AccessibilityService_SoftKeyboardController(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityService_SoftKeyboardController()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICE_SOFTKEYBOARDCONTROLLER

