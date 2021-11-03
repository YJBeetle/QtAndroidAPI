#pragma once

#include "../../JObject.hpp"

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
	class AccessibilityButtonController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityButtonController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityButtonController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isAccessibilityButtonAvailable() const;
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0) const;
		void registerAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0, android::os::Handler arg1) const;
		void unregisterAccessibilityButtonCallback(android::accessibilityservice::AccessibilityButtonController_AccessibilityButtonCallback arg0) const;
	};
} // namespace android::accessibilityservice

