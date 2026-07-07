#pragma once

#include "../../os/Parcel.def.hpp"
#include "./MediaQualityManager_ProfileQueryParams.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JObject MediaQualityManager_ProfileQueryParams::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.MediaQualityManager$ProfileQueryParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MediaQualityManager_ProfileQueryParams::areParametersIncluded() const
	{
		return callMethod<jboolean>(
			"areParametersIncluded",
			"()Z"
		);
	}
	inline jint MediaQualityManager_ProfileQueryParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void MediaQualityManager_ProfileQueryParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
