#include "../../os/Parcel.hpp"
#include "./MessagePdu.hpp"

namespace android::service::carrier
{
	// Fields
	__JniBaseClass MessagePdu::CREATOR()
	{
		return getStaticObjectField(
			"android.service.carrier.MessagePdu",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	MessagePdu::MessagePdu(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MessagePdu::MessagePdu(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.service.carrier.MessagePdu",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	jint MessagePdu::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass MessagePdu::getPdus()
	{
		return callObjectMethod(
			"getPdus",
			"()Ljava/util/List;"
		);
	}
	void MessagePdu::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::carrier

