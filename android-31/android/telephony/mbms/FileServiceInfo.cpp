#include "../../os/Parcel.hpp"
#include "./FileServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	JObject FileServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.FileServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	FileServiceInfo::FileServiceInfo(QJniObject obj) : android::telephony::mbms::ServiceInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint FileServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject FileServiceInfo::getFiles() const
	{
		return callObjectMethod(
			"getFiles",
			"()Ljava/util/List;"
		);
	}
	void FileServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

