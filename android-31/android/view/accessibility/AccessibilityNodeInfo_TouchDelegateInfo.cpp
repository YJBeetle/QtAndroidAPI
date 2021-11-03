#include "../../graphics/Region.hpp"
#include "../../os/Parcel.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	JObject AccessibilityNodeInfo_TouchDelegateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(JObject arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AccessibilityNodeInfo_TouchDelegateInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Region AccessibilityNodeInfo_TouchDelegateInfo::getRegionAt(jint arg0) const
	{
		return callObjectMethod(
			"getRegionAt",
			"(I)Landroid/graphics/Region;",
			arg0
		);
	}
	jint AccessibilityNodeInfo_TouchDelegateInfo::getRegionCount() const
	{
		return callMethod<jint>(
			"getRegionCount",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo_TouchDelegateInfo::getTargetForRegion(android::graphics::Region arg0) const
	{
		return callObjectMethod(
			"getTargetForRegion",
			"(Landroid/graphics/Region;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo_TouchDelegateInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

