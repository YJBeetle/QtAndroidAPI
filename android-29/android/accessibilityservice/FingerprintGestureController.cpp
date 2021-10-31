#include "./FingerprintGestureController_FingerprintGestureCallback.hpp"
#include "../os/Handler.hpp"
#include "./FingerprintGestureController.hpp"

namespace android::accessibilityservice
{
	// Fields
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_DOWN"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_LEFT"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_RIGHT"
		);
	}
	jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_UP"
		);
	}
	
	// QAndroidJniObject forward
	FingerprintGestureController::FingerprintGestureController(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean FingerprintGestureController::isGestureDetectionAvailable()
	{
		return callMethod<jboolean>(
			"isGestureDetectionAvailable",
			"()Z"
		);
	}
	void FingerprintGestureController::registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FingerprintGestureController::unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0)
	{
		callMethod<void>(
			"unregisterFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

