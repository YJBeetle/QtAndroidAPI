#pragma once

#include "./FingerprintGestureController_FingerprintGestureCallback.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback()
		: JObject(
			"android.accessibilityservice.FingerprintGestureController$FingerprintGestureCallback",
			"()V"
		) {}
	
	// Methods
	inline void FingerprintGestureController_FingerprintGestureCallback::onGestureDetected(jint arg0) const
	{
		callMethod<void>(
			"onGestureDetected",
			"(I)V",
			arg0
		);
	}
	inline void FingerprintGestureController_FingerprintGestureCallback::onGestureDetectionAvailabilityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onGestureDetectionAvailabilityChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
