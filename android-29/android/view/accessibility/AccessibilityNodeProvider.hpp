#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::view::accessibility
{
	class AccessibilityNodeProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint HOST_VIEW_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeProvider(QJniObject obj);
		
		// Constructors
		AccessibilityNodeProvider();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, android::os::Bundle arg3);
		android::view::accessibility::AccessibilityNodeInfo createAccessibilityNodeInfo(jint arg0);
		__JniBaseClass findAccessibilityNodeInfosByText(jstring arg0, jint arg1);
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0);
		jboolean performAction(jint arg0, jint arg1, android::os::Bundle arg2);
	};
} // namespace android::view::accessibility

