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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_GestureResultCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_GestureResultCallback(QJniObject obj);
		
		// Constructors
		AccessibilityService_GestureResultCallback();
		
		// Methods
		void onCancelled(android::accessibilityservice::GestureDescription arg0) const;
		void onCompleted(android::accessibilityservice::GestureDescription arg0) const;
	};
} // namespace android::accessibilityservice

