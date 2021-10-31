#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class GestureDescription;
}

namespace android::accessibilityservice
{
	class AccessibilityService_GestureResultCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_GestureResultCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_GestureResultCallback(QJniObject obj);
		
		// Constructors
		AccessibilityService_GestureResultCallback();
		
		// Methods
		void onCancelled(android::accessibilityservice::GestureDescription arg0);
		void onCompleted(android::accessibilityservice::GestureDescription arg0);
	};
} // namespace android::accessibilityservice

