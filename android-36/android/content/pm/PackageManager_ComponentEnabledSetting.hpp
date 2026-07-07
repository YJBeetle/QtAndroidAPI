#pragma once

#include "../ComponentName.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./PackageManager_ComponentEnabledSetting.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageManager_ComponentEnabledSetting::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager$ComponentEnabledSetting",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PackageManager_ComponentEnabledSetting::PackageManager_ComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2)
		: JObject(
			"android.content.pm.PackageManager$ComponentEnabledSetting",
			"(Landroid/content/ComponentName;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint PackageManager_ComponentEnabledSetting::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ComponentName PackageManager_ComponentEnabledSetting::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint PackageManager_ComponentEnabledSetting::getEnabledFlags() const
	{
		return callMethod<jint>(
			"getEnabledFlags",
			"()I"
		);
	}
	inline jint PackageManager_ComponentEnabledSetting::getEnabledState() const
	{
		return callMethod<jint>(
			"getEnabledState",
			"()I"
		);
	}
	inline void PackageManager_ComponentEnabledSetting::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
