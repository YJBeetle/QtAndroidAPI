#include "./FingerprintGestureController_FingerprintGestureCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback()
		: JObject(
			"android.accessibilityservice.FingerprintGestureController$FingerprintGestureCallback",
			"()V"
		) {}
	
	// Methods
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetected(jint arg0)
	{
		callMethod<void>(
			"onGestureDetected",
			"(I)V",
			arg0
		);
	}
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetectionAvailabilityChanged(jboolean arg0)
	{
		callMethod<void>(
			"onGestureDetectionAvailabilityChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::accessibilityservice

