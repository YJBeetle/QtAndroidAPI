#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintGestureController_FingerprintGestureCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintGestureController_FingerprintGestureCallback(QJniObject obj);
		
		// Constructors
		FingerprintGestureController_FingerprintGestureCallback();
		
		// Methods
		void onGestureDetected(jint arg0);
		void onGestureDetectionAvailabilityChanged(jboolean arg0);
	};
} // namespace android::accessibilityservice

