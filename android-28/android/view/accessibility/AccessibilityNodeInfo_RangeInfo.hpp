#pragma once

#include "./AccessibilityNodeInfo_RangeInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_FLOAT"
		);
	}
	inline jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_INT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_INT"
		);
	}
	inline jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_PERCENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_PERCENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo_RangeInfo AccessibilityNodeInfo_RangeInfo::obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"obtain",
			"(IFFF)Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jfloat AccessibilityNodeInfo_RangeInfo::getCurrent() const
	{
		return callMethod<jfloat>(
			"getCurrent",
			"()F"
		);
	}
	inline jfloat AccessibilityNodeInfo_RangeInfo::getMax() const
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	inline jfloat AccessibilityNodeInfo_RangeInfo::getMin() const
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	inline jint AccessibilityNodeInfo_RangeInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::view::accessibility

// Base class headers

