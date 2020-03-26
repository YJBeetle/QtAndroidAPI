#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_RANGEINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_RANGEINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint RANGE_TYPE_FLOAT();
		static jint RANGE_TYPE_INT();
		static jint RANGE_TYPE_PERCENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getType();
		jfloat getCurrent();
		jfloat getMin();
		jfloat getMax();
		static QAndroidJniObject obtain(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
	};
} // namespace __jni_impl::android::view::accessibility


namespace __jni_impl::android::view::accessibility
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
	
	// Constructors
	void AccessibilityNodeInfo_RangeInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo$RangeInfo",
			"(V)V");
	}
	
	// Methods
	jint AccessibilityNodeInfo_RangeInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getCurrent()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrent",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMin()
	{
		return __thiz.callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jfloat AccessibilityNodeInfo_RangeInfo::getMax()
	{
		return __thiz.callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
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
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo_RangeInfo
	{
	public:
		AccessibilityNodeInfo_RangeInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo_RangeInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_RANGEINFO

