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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isAccessibilityButtonSupported();
		void addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0) const;
		jboolean addAccessibilityStateChangeListener(JObject arg0) const;
		void addAccessibilityStateChangeListener(JObject arg0, android::os::Handler arg1) const;
		jboolean addTouchExplorationStateChangeListener(JObject arg0) const;
		void addTouchExplorationStateChangeListener(JObject arg0, android::os::Handler arg1) const;
		JObject getAccessibilityServiceList() const;
		JObject getEnabledAccessibilityServiceList(jint arg0) const;
		JObject getInstalledAccessibilityServiceList() const;
		void interrupt() const;
		jboolean isEnabled() const;
		jboolean isTouchExplorationEnabled() const;
		void removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0) const;
		jboolean removeAccessibilityStateChangeListener(JObject arg0) const;
		jboolean removeTouchExplorationStateChangeListener(JObject arg0) const;
		void sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
	};
} // namespace android::view::accessibility

