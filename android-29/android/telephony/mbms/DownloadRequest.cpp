#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./DownloadRequest.hpp"

namespace android::telephony::mbms
{
	// Fields
	QAndroidJniObject DownloadRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DownloadRequest::DownloadRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DownloadRequest::getMaxAppIntentSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxAppIntentSize",
			"()I"
		);
	}
	jint DownloadRequest::getMaxDestinationUriSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxDestinationUriSize",
			"()I"
		);
	}
	jint DownloadRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DownloadRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DownloadRequest::getDestinationUri()
	{
		return __thiz.callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring DownloadRequest::getFileServiceId()
	{
		return __thiz.callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DownloadRequest::getSourceUri()
	{
		return __thiz.callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	jint DownloadRequest::getSubscriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint DownloadRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray DownloadRequest::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	void DownloadRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

