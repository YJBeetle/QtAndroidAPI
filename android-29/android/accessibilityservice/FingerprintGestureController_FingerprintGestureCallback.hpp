#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		FingerprintGestureController_FingerprintGestureCallback(QAndroidJniObject obj);
		// Constructors
		FingerprintGestureController_FingerprintGestureCallback();
		
		// Methods
		void onGestureDetected(jint arg0);
		void onGestureDetectionAvailabilityChanged(jboolean arg0);
	};
} // namespace android::accessibilityservice

