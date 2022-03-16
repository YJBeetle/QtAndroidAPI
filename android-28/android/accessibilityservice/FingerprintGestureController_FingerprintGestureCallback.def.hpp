#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class FingerprintGestureController_FingerprintGestureCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintGestureController_FingerprintGestureCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintGestureController_FingerprintGestureCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FingerprintGestureController_FingerprintGestureCallback();
		
		// Methods
		void onGestureDetected(jint arg0) const;
		void onGestureDetectionAvailabilityChanged(jboolean arg0) const;
	};
} // namespace android::accessibilityservice

