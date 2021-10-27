#include "./FingerprintGestureController_FingerprintGestureCallback.hpp"
#include "../os/Handler.hpp"
#include "./FingerprintGestureController.hpp"

namespace android::accessibilityservice
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
	
	FingerprintGestureController::FingerprintGestureController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean FingerprintGestureController::isGestureDetectionAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isGestureDetectionAvailable",
			"()Z"
		);
	}
	void FingerprintGestureController::registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FingerprintGestureController::unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::accessibilityservice

