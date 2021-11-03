#include "./Parcel.hpp"
#include "../../JString.hpp"
#include "./Debug_MemoryInfo.hpp"

namespace android::os
{
	// Fields
	JObject Debug_MemoryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Debug$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Debug_MemoryInfo::dalvikPrivateDirty()
	{
		return getField<jint>(
			"dalvikPrivateDirty"
		);
	}
	jint Debug_MemoryInfo::dalvikPss()
	{
		return getField<jint>(
			"dalvikPss"
		);
	}
	jint Debug_MemoryInfo::dalvikSharedDirty()
	{
		return getField<jint>(
			"dalvikSharedDirty"
		);
	}
	jint Debug_MemoryInfo::nativePrivateDirty()
	{
		return getField<jint>(
			"nativePrivateDirty"
		);
	}
	jint Debug_MemoryInfo::nativePss()
	{
		return getField<jint>(
			"nativePss"
		);
	}
	jint Debug_MemoryInfo::nativeSharedDirty()
	{
		return getField<jint>(
			"nativeSharedDirty"
		);
	}
	jint Debug_MemoryInfo::otherPrivateDirty()
	{
		return getField<jint>(
			"otherPrivateDirty"
		);
	}
	jint Debug_MemoryInfo::otherPss()
	{
		return getField<jint>(
			"otherPss"
		);
	}
	jint Debug_MemoryInfo::otherSharedDirty()
	{
		return getField<jint>(
			"otherSharedDirty"
		);
	}
	
	// QJniObject forward
	Debug_MemoryInfo::Debug_MemoryInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Debug_MemoryInfo::Debug_MemoryInfo()
		: JObject(
			"android.os.Debug$MemoryInfo",
			"()V"
		) {}
	
	// Methods
	jint Debug_MemoryInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString Debug_MemoryInfo::getMemoryStat(JString arg0) const
	{
		return callObjectMethod(
			"getMemoryStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Debug_MemoryInfo::getMemoryStats() const
	{
		return callObjectMethod(
			"getMemoryStats",
			"()Ljava/util/Map;"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateClean() const
	{
		return callMethod<jint>(
			"getTotalPrivateClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateDirty() const
	{
		return callMethod<jint>(
			"getTotalPrivateDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPss() const
	{
		return callMethod<jint>(
			"getTotalPss",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedClean() const
	{
		return callMethod<jint>(
			"getTotalSharedClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedDirty() const
	{
		return callMethod<jint>(
			"getTotalSharedDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSwappablePss() const
	{
		return callMethod<jint>(
			"getTotalSwappablePss",
			"()I"
		);
	}
	void Debug_MemoryInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Debug_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

