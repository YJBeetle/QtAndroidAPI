#include "../../os/Parcel.hpp"
#include "./FileServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	__JniBaseClass FileServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.FileServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	FileServiceInfo::FileServiceInfo(QAndroidJniObject obj) : android::telephony::mbms::ServiceInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint FileServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass FileServiceInfo::getFiles()
	{
		return callObjectMethod(
			"getFiles",
			"()Ljava/util/List;"
		);
	}
	void FileServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

