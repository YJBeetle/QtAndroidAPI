#include "../os/Parcel.hpp"
#include "./IccOpenLogicalChannelResponse.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject IccOpenLogicalChannelResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.IccOpenLogicalChannelResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint IccOpenLogicalChannelResponse::INVALID_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"INVALID_CHANNEL"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_MISSING_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_MISSING_RESOURCE"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_ERROR"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_NO_SUCH_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_NO_SUCH_ELEMENT"
		);
	}
	jint IccOpenLogicalChannelResponse::STATUS_UNKNOWN_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.IccOpenLogicalChannelResponse",
			"STATUS_UNKNOWN_ERROR"
		);
	}
	
	IccOpenLogicalChannelResponse::IccOpenLogicalChannelResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint IccOpenLogicalChannelResponse::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint IccOpenLogicalChannelResponse::getChannel()
	{
		return __thiz.callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	jbyteArray IccOpenLogicalChannelResponse::getSelectResponse()
	{
		return __thiz.callObjectMethod(
			"getSelectResponse",
			"()[B"
		).object<jbyteArray>();
	}
	jint IccOpenLogicalChannelResponse::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jstring IccOpenLogicalChannelResponse::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IccOpenLogicalChannelResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

