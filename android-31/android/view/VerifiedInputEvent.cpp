#include "../os/Parcel.hpp"
#include "./VerifiedInputEvent.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass VerifiedInputEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedInputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VerifiedInputEvent::VerifiedInputEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedInputEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VerifiedInputEvent::getDeviceId()
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	jint VerifiedInputEvent::getDisplayId()
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jlong VerifiedInputEvent::getEventTimeNanos()
	{
		return callMethod<jlong>(
			"getEventTimeNanos",
			"()J"
		);
	}
	jint VerifiedInputEvent::getSource()
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	void VerifiedInputEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

