#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Handler;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityRequestPreparer;
}

namespace android::view::accessibility
{
	class AccessibilityManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isAccessibilityButtonSupported();
		void addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0);
		jboolean addAccessibilityStateChangeListener(JObject arg0);
		void addAccessibilityStateChangeListener(JObject arg0, android::os::Handler arg1);
		jboolean addTouchExplorationStateChangeListener(JObject arg0);
		void addTouchExplorationStateChangeListener(JObject arg0, android::os::Handler arg1);
		JObject getAccessibilityServiceList();
		JObject getEnabledAccessibilityServiceList(jint arg0);
		JObject getInstalledAccessibilityServiceList();
		void interrupt();
		jboolean isEnabled();
		jboolean isTouchExplorationEnabled();
		void removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0);
		jboolean removeAccessibilityStateChangeListener(JObject arg0);
		jboolean removeTouchExplorationStateChangeListener(JObject arg0);
		void sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
	};
} // namespace android::view::accessibility

