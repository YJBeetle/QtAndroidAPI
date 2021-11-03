#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintGestureController_FingerprintGestureCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintGestureController_FingerprintGestureCallback(QAndroidJniObject obj);
		
		// Constructors
		FingerprintGestureController_FingerprintGestureCallback();
		
		// Methods
		void onGestureDetected(jint arg0);
		void onGestureDetectionAvailabilityChanged(jboolean arg0);
	};
} // namespace android::accessibilityservice

