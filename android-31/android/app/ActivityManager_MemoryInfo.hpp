#pragma once

#include "../os/Parcel.def.hpp"
#include "./ActivityManager_MemoryInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_MemoryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong ActivityManager_MemoryInfo::availMem()
	{
		return getField<jlong>(
			"availMem"
		);
	}
	inline jboolean ActivityManager_MemoryInfo::lowMemory()
	{
		return getField<jboolean>(
			"lowMemory"
		);
	}
	inline jlong ActivityManager_MemoryInfo::threshold()
	{
		return getField<jlong>(
			"threshold"
		);
	}
	inline jlong ActivityManager_MemoryInfo::totalMem()
	{
		return getField<jlong>(
			"totalMem"
		);
	}
	
	// Constructors
	inline ActivityManager_MemoryInfo::ActivityManager_MemoryInfo()
		: JObject(
			"android.app.ActivityManager$MemoryInfo",
			"()V"
		) {}
	
	// Methods
	inline jint ActivityManager_MemoryInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_MemoryInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

