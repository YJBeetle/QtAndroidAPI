#pragma once

#include "../../os/Bundle.def.hpp"
#include "./AccessibilityNodeInfo.def.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityNodeProvider.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityNodeProvider::HOST_VIEW_ID()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeProvider",
			"HOST_VIEW_ID"
		);
	}
	
	// Constructors
	inline AccessibilityNodeProvider::AccessibilityNodeProvider()
		: JObject(
			"android.view.accessibility.AccessibilityNodeProvider",
			"()V"
		) {}
	
	// Methods
	inline void AccessibilityNodeProvider::addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, JString arg2, android::os::Bundle arg3) const
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
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeProvider::createAccessibilityNodeInfo(jint arg0) const
	{
		return callObjectMethod(
			"createAccessibilityNodeInfo",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline JObject AccessibilityNodeProvider::findAccessibilityNodeInfosByText(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeProvider::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline jboolean AccessibilityNodeProvider::performAction(jint arg0, jint arg1, android::os::Bundle arg2) const
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

// Base class headers

