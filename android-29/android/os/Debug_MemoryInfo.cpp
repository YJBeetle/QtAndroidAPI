#include "./Parcel.hpp"
#include "./Debug_MemoryInfo.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Debug_MemoryInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
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
	
	// QAndroidJniObject forward
	Debug_MemoryInfo::Debug_MemoryInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Debug_MemoryInfo::Debug_MemoryInfo()
		: __JniBaseClass(
			"android.os.Debug$MemoryInfo",
			"()V"
		) {}
	
	// Methods
	jint Debug_MemoryInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Debug_MemoryInfo::getMemoryStat(jstring arg0)
	{
		return callObjectMethod(
			"getMemoryStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Debug_MemoryInfo::getMemoryStats()
	{
		return callObjectMethod(
			"getMemoryStats",
			"()Ljava/util/Map;"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateClean()
	{
		return callMethod<jint>(
			"getTotalPrivateClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateDirty()
	{
		return callMethod<jint>(
			"getTotalPrivateDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPss()
	{
		return callMethod<jint>(
			"getTotalPss",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedClean()
	{
		return callMethod<jint>(
			"getTotalSharedClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedDirty()
	{
		return callMethod<jint>(
			"getTotalSharedDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSwappablePss()
	{
		return callMethod<jint>(
			"getTotalSwappablePss",
			"()I"
		);
	}
	void Debug_MemoryInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Debug_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

