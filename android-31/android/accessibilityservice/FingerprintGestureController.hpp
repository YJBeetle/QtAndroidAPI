#pragma once

#include "../../JObject.hpp"

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
	class FingerprintGestureController : public JObject
	{
	public:
		// Fields
		static jint FINGERPRINT_GESTURE_SWIPE_DOWN();
		static jint FINGERPRINT_GESTURE_SWIPE_LEFT();
		static jint FINGERPRINT_GESTURE_SWIPE_RIGHT();
		static jint FINGERPRINT_GESTURE_SWIPE_UP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintGestureController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintGestureController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isGestureDetectionAvailable() const;
		void registerFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0, android::os::Handler arg1) const;
		void unregisterFingerprintGestureCallback(android::accessibilityservice::FingerprintGestureController_FingerprintGestureCallback arg0) const;
	};
} // namespace android::accessibilityservice

