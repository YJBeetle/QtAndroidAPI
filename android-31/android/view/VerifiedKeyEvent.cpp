#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "./VerifiedKeyEvent.hpp"

namespace android::view
{
	// Fields
	JObject VerifiedKeyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedKeyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VerifiedKeyEvent::VerifiedKeyEvent(QAndroidJniObject obj) : android::view::VerifiedInputEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedKeyEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VerifiedKeyEvent::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VerifiedKeyEvent::getAction()
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jlong VerifiedKeyEvent::getDownTimeNanos()
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	java::lang::Boolean VerifiedKeyEvent::getFlag(jint arg0)
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint VerifiedKeyEvent::getKeyCode()
	{
		return callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getMetaState()
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getRepeatCount()
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getScanCode()
	{
		return callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	jint VerifiedKeyEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void VerifiedKeyEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

