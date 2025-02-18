#pragma once

#include "./AccessibilityNodeInfo_CollectionInfo.def.hpp"
#include "./AccessibilityNodeInfo_CollectionInfo_Builder.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	inline AccessibilityNodeInfo_CollectionInfo_Builder::AccessibilityNodeInfo_CollectionInfo_Builder()
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo_CollectionInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setColumnCount(jint arg0) const
	{
		return callObjectMethod(
			"setColumnCount",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setHierarchical(jboolean arg0) const
	{
		return callObjectMethod(
			"setHierarchical",
			"(Z)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setImportantForAccessibilityItemCount(jint arg0) const
	{
		return callObjectMethod(
			"setImportantForAccessibilityItemCount",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setItemCount(jint arg0) const
	{
		return callObjectMethod(
			"setItemCount",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setRowCount(jint arg0) const
	{
		return callObjectMethod(
			"setRowCount",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder AccessibilityNodeInfo_CollectionInfo_Builder::setSelectionMode(jint arg0) const
	{
		return callObjectMethod(
			"setSelectionMode",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo$Builder;",
			arg0
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
