#include "./FingerprintGestureController_FingerprintGestureCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QAndroidJniObject forward
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback()
		: JObject(
			"android.accessibilityservice.FingerprintGestureController$FingerprintGestureCallback",
			"()V"
		) {}
	
	// Methods
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetected(jint arg0) const
	{
		callMethod<void>(
			"onGestureDetected",
			"(I)V",
			arg0
		);
	}
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetectionAvailabilityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onGestureDetectionAvailabilityChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::accessibilityservice

