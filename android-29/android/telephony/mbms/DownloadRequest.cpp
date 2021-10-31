#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./DownloadRequest.hpp"

namespace android::telephony::mbms
{
	// Fields
	__JniBaseClass DownloadRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DownloadRequest::DownloadRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jint DownloadRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DownloadRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::Uri DownloadRequest::getDestinationUri()
	{
		return callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring DownloadRequest::getFileServiceId()
	{
		return callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri DownloadRequest::getSourceUri()
	{
		return callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	jint DownloadRequest::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint DownloadRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray DownloadRequest::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	void DownloadRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

