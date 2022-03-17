#pragma once

#include "./Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Debug_MemoryInfo.def.hpp"

namespace android::os
{
	// Fields
	inline JObject Debug_MemoryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Debug$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Debug_MemoryInfo::dalvikPrivateDirty()
	{
		return getField<jint>(
			"dalvikPrivateDirty"
		);
	}
	inline jint Debug_MemoryInfo::dalvikPss()
	{
		return getField<jint>(
			"dalvikPss"
		);
	}
	inline jint Debug_MemoryInfo::dalvikSharedDirty()
	{
		return getField<jint>(
			"dalvikSharedDirty"
		);
	}
	inline jint Debug_MemoryInfo::nativePrivateDirty()
	{
		return getField<jint>(
			"nativePrivateDirty"
		);
	}
	inline jint Debug_MemoryInfo::nativePss()
	{
		return getField<jint>(
			"nativePss"
		);
	}
	inline jint Debug_MemoryInfo::nativeSharedDirty()
	{
		return getField<jint>(
			"nativeSharedDirty"
		);
	}
	inline jint Debug_MemoryInfo::otherPrivateDirty()
	{
		return getField<jint>(
			"otherPrivateDirty"
		);
	}
	inline jint Debug_MemoryInfo::otherPss()
	{
		return getField<jint>(
			"otherPss"
		);
	}
	inline jint Debug_MemoryInfo::otherSharedDirty()
	{
		return getField<jint>(
			"otherSharedDirty"
		);
	}
	
	// Constructors
	inline Debug_MemoryInfo::Debug_MemoryInfo()
		: JObject(
			"android.os.Debug$MemoryInfo",
			"()V"
		) {}
	
	// Methods
	inline jint Debug_MemoryInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Debug_MemoryInfo::getMemoryStat(JString arg0) const
	{
		return callObjectMethod(
			"getMemoryStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Debug_MemoryInfo::getMemoryStats() const
	{
		return callObjectMethod(
			"getMemoryStats",
			"()Ljava/util/Map;"
		);
	}
	inline jint Debug_MemoryInfo::getTotalPrivateClean() const
	{
		return callMethod<jint>(
			"getTotalPrivateClean",
			"()I"
		);
	}
	inline jint Debug_MemoryInfo::getTotalPrivateDirty() const
	{
		return callMethod<jint>(
			"getTotalPrivateDirty",
			"()I"
		);
	}
	inline jint Debug_MemoryInfo::getTotalPss() const
	{
		return callMethod<jint>(
			"getTotalPss",
			"()I"
		);
	}
	inline jint Debug_MemoryInfo::getTotalSharedClean() const
	{
		return callMethod<jint>(
			"getTotalSharedClean",
			"()I"
		);
	}
	inline jint Debug_MemoryInfo::getTotalSharedDirty() const
	{
		return callMethod<jint>(
			"getTotalSharedDirty",
			"()I"
		);
	}
	inline jint Debug_MemoryInfo::getTotalSwappablePss() const
	{
		return callMethod<jint>(
			"getTotalSwappablePss",
			"()I"
		);
	}
	inline void Debug_MemoryInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Debug_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
