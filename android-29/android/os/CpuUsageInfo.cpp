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
	
	// QAndroidJniObject forward
	CpuUsageInfo::CpuUsageInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint CpuUsageInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CpuUsageInfo::getActive()
	{
		return callMethod<jlong>(
			"getActive",
			"()J"
		);
	}
	jlong CpuUsageInfo::getTotal()
	{
		return callMethod<jlong>(
			"getTotal",
			"()J"
		);
	}
	void CpuUsageInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os
