#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
class JString;

namespace android::view::accessibility
{
	class AccessibilityNodeProvider : public JObject
	{
	public:
		// Fields
		static jint HOST_VIEW_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeProvider(QAndroidJniObject obj);
		
		// Constructors
		AccessibilityNodeProvider();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, JString arg2, android::os::Bundle arg3);
		android::view::accessibility::AccessibilityNodeInfo createAccessibilityNodeInfo(jint arg0);
		JObject findAccessibilityNodeInfosByText(JString arg0, jint arg1);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		jboolean performAction(jint arg0, jint arg1, android::os::Bundle arg2);
	};
} // namespace android::view::accessibility

