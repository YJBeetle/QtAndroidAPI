#pragma once

#include "../../os/Parcel.def.hpp"
#include "./ExternalStorageStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject ExternalStorageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.ExternalStorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ExternalStorageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong ExternalStorageStats::getAppBytes() const
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	inline jlong ExternalStorageStats::getAudioBytes() const
	{
		return callMethod<jlong>(
			"getAudioBytes",
			"()J"
		);
	}
	inline jlong ExternalStorageStats::getImageBytes() const
	{
		return callMethod<jlong>(
			"getImageBytes",
			"()J"
		);
	}
	inline jlong ExternalStorageStats::getTotalBytes() const
	{
		return callMethod<jlong>(
			"getTotalBytes",
			"()J"
		);
	}
	inline jlong ExternalStorageStats::getVideoBytes() const
	{
		return callMethod<jlong>(
			"getVideoBytes",
			"()J"
		);
	}
	inline void ExternalStorageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
