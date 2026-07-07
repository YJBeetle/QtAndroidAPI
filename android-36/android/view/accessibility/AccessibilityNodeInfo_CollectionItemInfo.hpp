#pragma once

#include "../../../JString.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	inline AccessibilityNodeInfo_CollectionItemInfo::AccessibilityNodeInfo_CollectionItemInfo(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline AccessibilityNodeInfo_CollectionItemInfo::AccessibilityNodeInfo_CollectionItemInfo(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"(IIIIZZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"obtain",
			"(IIIIZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo_CollectionItemInfo::obtain(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4, jboolean arg5)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$CollectionItemInfo",
			"obtain",
			"(IIIIZZ)Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline jint AccessibilityNodeInfo_CollectionItemInfo::getColumnIndex() const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionItemInfo::getColumnSpan() const
	{
		return callMethod<jint>(
			"getColumnSpan",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo_CollectionItemInfo::getColumnTitle() const
	{
		return callObjectMethod(
			"getColumnTitle",
			"()Ljava/lang/String;"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionItemInfo::getRowIndex() const
	{
		return callMethod<jint>(
			"getRowIndex",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo_CollectionItemInfo::getRowSpan() const
	{
		return callMethod<jint>(
			"getRowSpan",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo_CollectionItemInfo::getRowTitle() const
	{
		return callObjectMethod(
			"getRowTitle",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean AccessibilityNodeInfo_CollectionItemInfo::isHeading() const
	{
		return callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo_CollectionItemInfo::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
