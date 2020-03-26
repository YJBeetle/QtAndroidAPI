#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_FINGERPRINTGESTURECONTROLLER
#define ANDROID_ACCESSIBILITYSERVICE_FINGERPRINTGESTURECONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::accessibilityservice
{
	class FingerprintGestureController : public __JniBaseClass
	{
	public:
		// Fields
		static jint FINGERPRINT_GESTURE_SWIPE_DOWN();
		static jint FINGERPRINT_GESTURE_SWIPE_LEFT();
		static jint FINGERPRINT_GESTURE_SWIPE_RIGHT();
		static jint FINGERPRINT_GESTURE_SWIPE_UP();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isGestureDetectionAvailable();
		void registerFingerprintGestureCallback(__jni_impl::android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, __jni_impl::android::os::Handler arg1);
		void unregisterFingerprintGestureCallback(__jni_impl::android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0);
	};
} // namespace __jni_impl::android::accessibilityservice

#include "FingerprintGestureController_FingerprintGestureCallback.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_DOWN"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_LEFT"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_RIGHT"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_UP"
		);
	}
	
	// Constructors
	void FingerprintGestureController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.FingerprintGestureController",
			"(V)V");
	}
	
	// Methods
	jboolean FingerprintGestureController::isGestureDetectionAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isGestureDetectionAvailable",
			"()Z"
		);
	}
	void FingerprintGestureController::registerFingerprintGestureCallback(__jni_impl::android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FingerprintGestureController::unregisterFingerprintGestureCallback(__jni_impl::android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class FingerprintGestureController : public __jni_impl::android::accessibilityservice::FingerprintGestureController
	{
	public:
		FingerprintGestureController(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintGestureController()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_FINGERPRINTGESTURECONTROLLER

