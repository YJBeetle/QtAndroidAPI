#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class AccessibilityButtonController;
}

namespace android::accessibilityservice
{
	class AccessibilityButtonController_AccessibilityButtonCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityButtonController_AccessibilityButtonCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityButtonController_AccessibilityButtonCallback(QJniObject obj);
		
		// Constructors
		AccessibilityButtonController_AccessibilityButtonCallback();
		
		// Methods
		void onAvailabilityChanged(android::accessibilityservice::AccessibilityButtonController arg0, jboolean arg1) const;
		void onClicked(android::accessibilityservice::AccessibilityButtonController arg0) const;
	};
} // namespace android::accessibilityservice

