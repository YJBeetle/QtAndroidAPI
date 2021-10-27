#include "./FingerprintGestureController_FingerprintGestureCallback.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FingerprintGestureController_FingerprintGestureCallback::FingerprintGestureController_FingerprintGestureCallback()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.FingerprintGestureController$FingerprintGestureCallback",
			"()V"
		);
	}
	
	// Methods
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetected(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGestureDetected",
			"(I)V",
			arg0
		);
	}
	void FingerprintGestureController_FingerprintGestureCallback::onGestureDetectionAvailabilityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onGestureDetectionAvailabilityChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::accessibilityservice

