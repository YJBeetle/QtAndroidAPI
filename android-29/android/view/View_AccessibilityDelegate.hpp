#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeProvider;
}

namespace android::view
{
	class View_AccessibilityDelegate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit View_AccessibilityDelegate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		View_AccessibilityDelegate(QAndroidJniObject obj);
		
		// Constructors
		View_AccessibilityDelegate();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, android::os::Bundle arg3);
		jboolean dispatchPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
		QAndroidJniObject getAccessibilityNodeProvider(android::view::View arg0);
		void onInitializeAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
		void onInitializeAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1);
		void onPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
		jboolean onRequestSendAccessibilityEvent(android::view::ViewGroup arg0, android::view::View arg1, android::view::accessibility::AccessibilityEvent arg2);
		jboolean performAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2);
		void sendAccessibilityEvent(android::view::View arg0, jint arg1);
		void sendAccessibilityEventUnchecked(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
	};
} // namespace android::view

