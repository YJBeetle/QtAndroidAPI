#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_TOUCHDELEGATEINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_TOUCHDELEGATEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Region;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getRegionAt(jint arg0);
		jint getRegionCount();
		QAndroidJniObject getTargetForRegion(__jni_impl::android::graphics::Region arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../graphics/Region.hpp"
#include "../../os/Parcel.hpp"
#include "AccessibilityNodeInfo.hpp"

namespace __jni_impl::android::view::accessibility
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
	
	// Constructors
	void AccessibilityNodeInfo_TouchDelegateInfo::__constructor(__jni_impl::__JniBaseClass arg0)
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
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::getTargetForRegion(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callObjectMethod(
			"getTargetForRegion",
			"(Landroid/graphics/Region;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo_TouchDelegateInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo
	{
	public:
		AccessibilityNodeInfo_TouchDelegateInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo_TouchDelegateInfo(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_TOUCHDELEGATEINFO

