#include "../os/Parcel.hpp"
#include "./ActivityManager_MemoryInfo.hpp"

namespace android::app
{
	// Fields
	JObject ActivityManager_MemoryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong ActivityManager_MemoryInfo::availMem()
	{
		return getField<jlong>(
			"availMem"
		);
	}
	jboolean ActivityManager_MemoryInfo::lowMemory()
	{
		return getField<jboolean>(
			"lowMemory"
		);
	}
	jlong ActivityManager_MemoryInfo::threshold()
	{
		return getField<jlong>(
			"threshold"
		);
	}
	jlong ActivityManager_MemoryInfo::totalMem()
	{
		return getField<jlong>(
			"totalMem"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_MemoryInfo::ActivityManager_MemoryInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActivityManager_MemoryInfo::ActivityManager_MemoryInfo()
		: JObject(
			"android.app.ActivityManager$MemoryInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_MemoryInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_MemoryInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

