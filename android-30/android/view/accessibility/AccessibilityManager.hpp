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
		static jint FLAG_CONTENT_CONTROLS();
		static jint FLAG_CONTENT_ICONS();
		static jint FLAG_CONTENT_TEXT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityManager(QAndroidJniObject obj) : JObject(obj) {}
		
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
		jint getRecommendedTimeoutMillis(jint arg0, jint arg1) const;
		void interrupt() const;
		jboolean isEnabled() const;
		jboolean isTouchExplorationEnabled() const;
		void removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0) const;
		jboolean removeAccessibilityStateChangeListener(JObject arg0) const;
		jboolean removeTouchExplorationStateChangeListener(JObject arg0) const;
		void sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
	};
} // namespace android::view::accessibility

