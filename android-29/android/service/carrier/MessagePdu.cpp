#include "../../os/Parcel.hpp"
#include "./MessagePdu.hpp"

namespace android::service::carrier
{
	// Fields
	QAndroidJniObject MessagePdu::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.carrier.MessagePdu",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	MessagePdu::MessagePdu(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MessagePdu::MessagePdu(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.MessagePdu",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint MessagePdu::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject MessagePdu::getPdus()
	{
		return __thiz.callObjectMethod(
			"getPdus",
			"()Ljava/util/List;"
		);
	}
	void MessagePdu::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::carrier

