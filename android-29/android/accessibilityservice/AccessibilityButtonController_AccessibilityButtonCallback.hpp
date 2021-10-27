#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class AccessibilityButtonController;
}

namespace android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibilityButtonController_AccessibilityButtonCallback(QAndroidJniObject obj);
		// Constructors
		AccessibilityButtonController_AccessibilityButtonCallback();
		
		// Methods
		void onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1);
		void onClicked(android::accessibilityservice::AccessibilityButtonController arg0);
	};
} // namespace android::accessibilityservice

