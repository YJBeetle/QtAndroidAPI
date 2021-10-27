#include "./Parcel.hpp"
#include "./CpuUsageInfo.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject CpuUsageInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.CpuUsageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CpuUsageInfo::CpuUsageInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CpuUsageInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CpuUsageInfo::getActive()
	{
		return __thiz.callMethod<jlong>(
			"getActive",
			"()J"
		);
	}
	jlong CpuUsageInfo::getTotal()
	{
		return __thiz.callMethod<jlong>(
			"getTotal",
			"()J"
		);
	}
	void CpuUsageInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

