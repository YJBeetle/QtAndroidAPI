#include "./Parcel.hpp"
#include "./CpuUsageInfo.hpp"

namespace android::os
{
	// Fields
	JObject CpuUsageInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.os.CpuUsageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CpuUsageInfo::CpuUsageInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CpuUsageInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CpuUsageInfo::getActive() const
	{
		return callMethod<jlong>(
			"getActive",
			"()J"
		);
	}
	jlong CpuUsageInfo::getTotal() const
	{
		return callMethod<jlong>(
			"getTotal",
			"()J"
		);
	}
	void CpuUsageInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

