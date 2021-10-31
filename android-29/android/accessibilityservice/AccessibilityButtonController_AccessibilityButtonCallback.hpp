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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityButtonController_AccessibilityButtonCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityButtonController_AccessibilityButtonCallback(QAndroidJniObject obj);
		
		// Constructors
		AccessibilityButtonController_AccessibilityButtonCallback();
		
		// Methods
		void onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1);
		void onClicked(android::accessibilityservice::AccessibilityButtonController arg0);
	};
} // namespace android::accessibilityservice

