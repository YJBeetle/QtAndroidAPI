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
	
	// Constructors
	
	// Methods
	jboolean FingerprintGestureController::isGestureDetectionAvailable() const
	{
		return callMethod<jboolean>(
			"isGestureDetectionAvailable",
			"()Z"
		);
	}
	void FingerprintGestureController::registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FingerprintGestureController::unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0) const
	{
		callMethod<void>(
			"unregisterFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

