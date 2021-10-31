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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityButtonController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityButtonController(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isAccessibilityButtonAvailable();
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1);
		void unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0);
	};
} // namespace android::accessibilityservice

