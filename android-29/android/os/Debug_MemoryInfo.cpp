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
		return __thiz.getField<jint>(
			"dalvikPrivateDirty"
		);
	}
	jint Debug_MemoryInfo::dalvikPss()
	{
		return __thiz.getField<jint>(
			"dalvikPss"
		);
	}
	jint Debug_MemoryInfo::dalvikSharedDirty()
	{
		return __thiz.getField<jint>(
			"dalvikSharedDirty"
		);
	}
	jint Debug_MemoryInfo::nativePrivateDirty()
	{
		return __thiz.getField<jint>(
			"nativePrivateDirty"
		);
	}
	jint Debug_MemoryInfo::nativePss()
	{
		return __thiz.getField<jint>(
			"nativePss"
		);
	}
	jint Debug_MemoryInfo::nativeSharedDirty()
	{
		return __thiz.getField<jint>(
			"nativeSharedDirty"
		);
	}
	jint Debug_MemoryInfo::otherPrivateDirty()
	{
		return __thiz.getField<jint>(
			"otherPrivateDirty"
		);
	}
	jint Debug_MemoryInfo::otherPss()
	{
		return __thiz.getField<jint>(
			"otherPss"
		);
	}
	jint Debug_MemoryInfo::otherSharedDirty()
	{
		return __thiz.getField<jint>(
			"otherSharedDirty"
		);
	}
	
	Debug_MemoryInfo::Debug_MemoryInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Debug_MemoryInfo::Debug_MemoryInfo()
	{
		__thiz = QAndroidJniObject(
			"android.os.Debug$MemoryInfo",
			"()V"
		);
	}
	
	// Methods
	jint Debug_MemoryInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Debug_MemoryInfo::getMemoryStat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMemoryStat",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Debug_MemoryInfo::getMemoryStats()
	{
		return __thiz.callObjectMethod(
			"getMemoryStats",
			"()Ljava/util/Map;"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateClean()
	{
		return __thiz.callMethod<jint>(
			"getTotalPrivateClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPrivateDirty()
	{
		return __thiz.callMethod<jint>(
			"getTotalPrivateDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalPss()
	{
		return __thiz.callMethod<jint>(
			"getTotalPss",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedClean()
	{
		return __thiz.callMethod<jint>(
			"getTotalSharedClean",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSharedDirty()
	{
		return __thiz.callMethod<jint>(
			"getTotalSharedDirty",
			"()I"
		);
	}
	jint Debug_MemoryInfo::getTotalSwappablePss()
	{
		return __thiz.callMethod<jint>(
			"getTotalSwappablePss",
			"()I"
		);
	}
	void Debug_MemoryInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Debug_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

