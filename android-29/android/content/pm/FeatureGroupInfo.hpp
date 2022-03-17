#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./FeatureGroupInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject FeatureGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.FeatureGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JArray FeatureGroupInfo::features()
	{
		return getObjectField(
			"features",
			"[Landroid/content/pm/FeatureInfo;"
		);
	}
	
	// Constructors
	inline FeatureGroupInfo::FeatureGroupInfo()
		: JObject(
			"android.content.pm.FeatureGroupInfo",
			"()V"
		) {}
	inline FeatureGroupInfo::FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0)
		: JObject(
			"android.content.pm.FeatureGroupInfo",
			"(Landroid/content/pm/FeatureGroupInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint FeatureGroupInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void FeatureGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
