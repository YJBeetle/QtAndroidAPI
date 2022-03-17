#pragma once

#include "../../os/Parcel.def.hpp"
#include "./StorageStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject StorageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.StorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint StorageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong StorageStats::getAppBytes() const
	{
		return callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	inline jlong StorageStats::getCacheBytes() const
	{
		return callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	inline jlong StorageStats::getDataBytes() const
	{
		return callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	inline void StorageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

