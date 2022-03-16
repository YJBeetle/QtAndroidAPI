#pragma once

#include "./Parcel.def.hpp"
#include "./CpuUsageInfo.def.hpp"

namespace android::os
{
	// Fields
	inline JObject CpuUsageInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.os.CpuUsageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CpuUsageInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong CpuUsageInfo::getActive() const
	{
		return callMethod<jlong>(
			"getActive",
			"()J"
		);
	}
	inline jlong CpuUsageInfo::getTotal() const
	{
		return callMethod<jlong>(
			"getTotal",
			"()J"
		);
	}
	inline void CpuUsageInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

