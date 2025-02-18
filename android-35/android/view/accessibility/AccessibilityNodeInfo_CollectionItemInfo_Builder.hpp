#pragma once

#include "./AccessibilityNodeInfo_CollectionItemInfo.def.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo_Builder.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	inline AccessibilityNodeInfo_CollectionItemInfo_Builder::AccessibilityNodeInfo_CollectionItemInfo_Builder()
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo_CollectionItemInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setColumnIndex(jint arg0) const
	{
		return callObjectMethod(
			"setColumnIndex",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setColumnSpan(jint arg0) const
	{
		return callObjectMethod(
			"setColumnSpan",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setColumnTitle(JString arg0) const
	{
		return callObjectMethod(
			"setColumnTitle",
			"(Ljava/lang/String;)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setHeading(jboolean arg0) const
	{
		return callObjectMethod(
			"setHeading",
			"(Z)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setRowIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRowIndex",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setRowSpan(jint arg0) const
	{
		return callObjectMethod(
			"setRowSpan",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setRowTitle(JString arg0) const
	{
		return callObjectMethod(
			"setRowTitle",
			"(Ljava/lang/String;)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder AccessibilityNodeInfo_CollectionItemInfo_Builder::setSelected(jboolean arg0) const
	{
		return callObjectMethod(
			"setSelected",
			"(Z)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo$Builder;",
			arg0
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
