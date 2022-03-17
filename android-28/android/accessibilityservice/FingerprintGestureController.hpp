#pragma once

#include "./FingerprintGestureController_FingerprintGestureCallback.def.hpp"
#include "../os/Handler.def.hpp"
#include "./FingerprintGestureController.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_DOWN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_DOWN"
		);
	}
	inline jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_LEFT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_LEFT"
		);
	}
	inline jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_RIGHT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_RIGHT"
		);
	}
	inline jint FingerprintGestureController::FINGERPRINT_GESTURE_SWIPE_UP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.FingerprintGestureController",
			"FINGERPRINT_GESTURE_SWIPE_UP"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean FingerprintGestureController::isGestureDetectionAvailable() const
	{
		return callMethod<jboolean>(
			"isGestureDetectionAvailable",
			"()Z"
		);
	}
	inline void FingerprintGestureController::registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FingerprintGestureController::unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0) const
	{
		callMethod<void>(
			"unregisterFingerprintGestureCallback",
			"(Landroid/accessibilityservice/FingerprintGestureController$FingerprintGestureCallback;)V",
			arg0.object()
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
