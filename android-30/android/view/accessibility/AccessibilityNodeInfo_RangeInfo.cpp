#include "./AccessibilityNodeInfo_RangeInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_FLOAT"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_INT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_INT"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_PERCENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_PERCENT"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_RangeInfo::AccessibilityNodeInfo_RangeInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityNodeInfo_RangeInfo::AccessibilityNodeInfo_RangeInfo(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	android::view::accessibility::AccessibilityNodeInfo_RangeInfo AccessibilityNodeInfo_RangeInfo::obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	jfloat AccessibilityNodeInfo_RangeInfo::getCurrent() const
	{
		return callMethod<jfloat>(
			"getCurrent",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMax() const
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMin() const
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::view::accessibility

