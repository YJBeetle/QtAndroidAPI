#include "./AccessibilityNodeInfo_RangeInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_FLOAT"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_INT"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::RANGE_TYPE_PERCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"RANGE_TYPE_PERCENT"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_RangeInfo::AccessibilityNodeInfo_RangeInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AccessibilityNodeInfo_RangeInfo::obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"obtain",
			"(IFFF)Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getCurrent()
	{
		return callMethod<jfloat>(
			"getCurrent",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMax()
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMin()
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jint AccessibilityNodeInfo_RangeInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::view::accessibility

