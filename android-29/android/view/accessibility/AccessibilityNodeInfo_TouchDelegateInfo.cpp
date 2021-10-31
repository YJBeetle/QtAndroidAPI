#include "../../graphics/Region.hpp"
#include "../../os/Parcel.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint AccessibilityNodeInfo_TouchDelegateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::getRegionAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRegionAt",
			"(I)Landroid/graphics/Region;",
			arg0
		);
	}
	jint AccessibilityNodeInfo_TouchDelegateInfo::getRegionCount()
	{
		return __thiz.callMethod<jint>(
			"getRegionCount",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::getTargetForRegion(android::graphics::Region arg0)
	{
		return __thiz.callObjectMethod(
			"getTargetForRegion",
			"(Landroid/graphics/Region;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo_TouchDelegateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::accessibility

