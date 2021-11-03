#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class GestureDescription;
}

namespace android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService_GestureResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_GestureResultCallback(QAndroidJniObject obj);
		
		// Constructors
		AccessibilityService_GestureResultCallback();
		
		// Methods
		void onCancelled(android::accessibilityservice::GestureDescription arg0);
		void onCompleted(android::accessibilityservice::GestureDescription arg0);
	};
} // namespace android::accessibilityservice

