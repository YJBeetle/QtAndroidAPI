#include "../os/Parcel.hpp"
#include "./ActivityManager_MemoryInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_MemoryInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$MemoryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong ActivityManager_MemoryInfo::availMem()
	{
		return __thiz.getField<jlong>(
			"availMem"
		);
	}
	jboolean ActivityManager_MemoryInfo::lowMemory()
	{
		return __thiz.getField<jboolean>(
			"lowMemory"
		);
	}
	jlong ActivityManager_MemoryInfo::threshold()
	{
		return __thiz.getField<jlong>(
			"threshold"
		);
	}
	jlong ActivityManager_MemoryInfo::totalMem()
	{
		return __thiz.getField<jlong>(
			"totalMem"
		);
	}
	
	ActivityManager_MemoryInfo::ActivityManager_MemoryInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_MemoryInfo::ActivityManager_MemoryInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$MemoryInfo",
			"()V"
		);
	}
	
	// Methods
	jint ActivityManager_MemoryInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_MemoryInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_MemoryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

