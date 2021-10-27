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
		
		AccessibilityService_GestureResultCallback(QAndroidJniObject obj);
		// Constructors
		AccessibilityService_GestureResultCallback();
		
		// Methods
		void onCancelled(android::accessibilityservice::GestureDescription arg0);
		void onCompleted(android::accessibilityservice::GestureDescription arg0);
	};
} // namespace android::accessibilityservice

