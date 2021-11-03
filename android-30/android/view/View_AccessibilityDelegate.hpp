#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::view
{
	class View_AccessibilityDelegate : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit View_AccessibilityDelegate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		View_AccessibilityDelegate(QJniObject obj);
		
		// Constructors
		View_AccessibilityDelegate();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1, JString arg2, android::os::Bundle arg3) const;
		jboolean dispatchPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider(android::view::View arg0) const;
		void onInitializeAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
		void onInitializeAccessibilityNodeInfo(android::view::View arg0, android::view::accessibility::AccessibilityNodeInfo arg1) const;
		void onPopulateAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
		jboolean onRequestSendAccessibilityEvent(android::view::ViewGroup arg0, android::view::View arg1, android::view::accessibility::AccessibilityEvent arg2) const;
		jboolean performAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2) const;
		void sendAccessibilityEvent(android::view::View arg0, jint arg1) const;
		void sendAccessibilityEventUnchecked(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
	};
} // namespace android::view

