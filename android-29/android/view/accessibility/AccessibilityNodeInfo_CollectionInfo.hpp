#pragma once

#include "./AccessibilityNodeInfo_CollectionInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_MULTIPLE"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_NONE"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionInfo::SELECTION_MODE_SINGLE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"SELECTION_MODE_SINGLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo_CollectionInfo::obtain(jint arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"obtain",
			"(IIZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo_CollectionInfo::obtain(jint arg0, jint arg1, jboolean arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionInfo",
			"obtain",
			"(IIZI)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jint AccessibilityNodeInfo_CollectionInfo::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionInfo::getRowCount() const
	{
		return callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionInfo::getSelectionMode() const
	{
		return callMethod<jint>(
			"getSelectionMode",
			"()I"
		);
	}
	inline jboolean AccessibilityNodeInfo_CollectionInfo::isHierarchical() const
	{
		return callMethod<jboolean>(
			"isHierarchical",
			"()Z"
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
