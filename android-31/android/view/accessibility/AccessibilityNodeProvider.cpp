#include "../../os/Bundle.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityNodeProvider.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeProvider::HOST_VIEW_ID()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeProvider",
			"HOST_VIEW_ID"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityNodeProvider::AccessibilityNodeProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityNodeProvider::AccessibilityNodeProvider()
		: JObject(
			"android.view.accessibility.AccessibilityNodeProvider",
			"()V"
		) {}
	
	// Methods
	void AccessibilityNodeProvider::addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, JString arg2, android::os::Bundle arg3)
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(ILandroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeProvider::createAccessibilityNodeInfo(jint arg0)
	{
		return callObjectMethod(
			"createAccessibilityNodeInfo",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	JObject AccessibilityNodeProvider::findAccessibilityNodeInfosByText(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeProvider::findFocus(jint arg0)
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jboolean AccessibilityNodeProvider::performAction(jint arg0, jint arg1, android::os::Bundle arg2)
	{
		return callMethod<jboolean>(
			"performAction",
			"(IILandroid/os/Bundle;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::view::accessibility

