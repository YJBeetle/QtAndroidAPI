#include "../../os/Parcel.hpp"
#include "./StreamingServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	JObject StreamingServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.StreamingServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	StreamingServiceInfo::StreamingServiceInfo(QJniObject obj) : android::telephony::mbms::ServiceInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint StreamingServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void StreamingServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

