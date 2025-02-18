#pragma once

#include "../../graphics/Region.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./AccessibilityNodeInfo.def.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline JObject AccessibilityNodeInfo_TouchDelegateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(JObject arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint AccessibilityNodeInfo_TouchDelegateInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::Region AccessibilityNodeInfo_TouchDelegateInfo::getRegionAt(jint arg0) const
	{
		return callObjectMethod(
			"getRegionAt",
			"(I)Landroid/graphics/Region;",
			arg0
		);
	}
	inline jint AccessibilityNodeInfo_TouchDelegateInfo::getRegionCount() const
	{
		return callMethod<jint>(
			"getRegionCount",
			"()I"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo_TouchDelegateInfo::getTargetForRegion(android::graphics::Region arg0) const
	{
		return callObjectMethod(
			"getTargetForRegion",
			"(Landroid/graphics/Region;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo_TouchDelegateInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
