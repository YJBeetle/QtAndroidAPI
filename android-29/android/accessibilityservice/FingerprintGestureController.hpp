#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback;
}
namespace android::os
{
	class Handler;
}

namespace android::accessibilityservice
{
	class FingerprintGestureController : public __JniBaseClass
	{
	public:
		// Fields
		static jint FINGERPRINT_GESTURE_SWIPE_DOWN();
		static jint FINGERPRINT_GESTURE_SWIPE_LEFT();
		static jint FINGERPRINT_GESTURE_SWIPE_RIGHT();
		static jint FINGERPRINT_GESTURE_SWIPE_UP();
		
		FingerprintGestureController(QAndroidJniObject obj);
		// Constructors
		FingerprintGestureController() = default;
		
		// Methods
		jboolean isGestureDetectionAvailable();
		void registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1);
		void unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0);
	};
} // namespace android::accessibilityservice

