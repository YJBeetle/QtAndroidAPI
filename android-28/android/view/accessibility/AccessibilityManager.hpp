#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class AccessibilityManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isAccessibilityButtonSupported();
		void addAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0);
		jboolean addAccessibilityStateChangeListener(__JniBaseClass arg0);
		void addAccessibilityStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1);
		jboolean addTouchExplorationStateChangeListener(__JniBaseClass arg0);
		void addTouchExplorationStateChangeListener(__JniBaseClass arg0, android::os::Handler arg1);
		__JniBaseClass getAccessibilityServiceList();
		__JniBaseClass getEnabledAccessibilityServiceList(jint arg0);
		__JniBaseClass getInstalledAccessibilityServiceList();
		void interrupt();
		jboolean isEnabled();
		jboolean isTouchExplorationEnabled();
		void removeAccessibilityRequestPreparer(android::view::accessibility::AccessibilityRequestPreparer arg0);
		jboolean removeAccessibilityStateChangeListener(__JniBaseClass arg0);
		jboolean removeTouchExplorationStateChangeListener(__JniBaseClass arg0);
		void sendAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
	};
} // namespace android::view::accessibility

