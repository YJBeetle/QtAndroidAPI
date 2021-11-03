#include "../../os/Parcel.hpp"
#include "./MessagePdu.hpp"

namespace android::service::carrier
{
	// Fields
	JObject MessagePdu::CREATOR()
	{
		return getStaticObjectField(
			"android.service.carrier.MessagePdu",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	MessagePdu::MessagePdu(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MessagePdu::MessagePdu(JObject arg0)
		: JObject(
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
	JObject MessagePdu::getPdus()
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

