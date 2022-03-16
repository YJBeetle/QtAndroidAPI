#include "../../../JByteArray.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DownloadRequest.hpp"

namespace android::telephony::mbms
{
	// Fields
	JObject DownloadRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint DownloadRequest::getMaxAppIntentSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxAppIntentSize",
			"()I"
		);
	}
	jint DownloadRequest::getMaxDestinationUriSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxDestinationUriSize",
			"()I"
		);
	}
	jint DownloadRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DownloadRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::Uri DownloadRequest::getDestinationUri() const
	{
		return callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	JString DownloadRequest::getFileServiceId() const
	{
		return callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri DownloadRequest::getSourceUri() const
	{
		return callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	jint DownloadRequest::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint DownloadRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray DownloadRequest::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	void DownloadRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

