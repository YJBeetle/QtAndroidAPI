#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback;
}
namespace android::os
{
	class Handler;
}

namespace android::accessibilityservice
{
	class AccessibilityButtonController : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibilityButtonController(QAndroidJniObject obj);
		// Constructors
		AccessibilityButtonController() = default;
		
		// Methods
		jboolean isAccessibilityButtonAvailable();
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1);
		void unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
	};
} // namespace android::accessibilityservice

