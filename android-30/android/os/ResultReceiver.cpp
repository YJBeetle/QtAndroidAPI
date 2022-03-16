#include "./Bundle.hpp"
#include "./Handler.hpp"
#include "./Parcel.hpp"
#include "./ResultReceiver.hpp"

namespace android::os
{
	// Fields
	JObject ResultReceiver::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ResultReceiver",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	ResultReceiver::ResultReceiver(android::os::Handler arg0)
		: JObject(
			"android.os.ResultReceiver",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ResultReceiver::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResultReceiver::send(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"send",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void ResultReceiver::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

