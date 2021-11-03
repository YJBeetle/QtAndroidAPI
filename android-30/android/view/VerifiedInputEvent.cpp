#include "../os/Parcel.hpp"
#include "./VerifiedInputEvent.hpp"

namespace android::view
{
	// Fields
	JObject VerifiedInputEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedInputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	VerifiedInputEvent::VerifiedInputEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedInputEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VerifiedInputEvent::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jint VerifiedInputEvent::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jlong VerifiedInputEvent::getEventTimeNanos() const
	{
		return callMethod<jlong>(
			"getEventTimeNanos",
			"()J"
		);
	}
	jint VerifiedInputEvent::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	void VerifiedInputEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

