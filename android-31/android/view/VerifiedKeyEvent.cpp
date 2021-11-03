#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../JObject.hpp"
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
	
	// QJniObject forward
	VerifiedKeyEvent::VerifiedKeyEvent(QJniObject obj) : android::view::VerifiedInputEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedKeyEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VerifiedKeyEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint VerifiedKeyEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jlong VerifiedKeyEvent::getDownTimeNanos() const
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	java::lang::Boolean VerifiedKeyEvent::getFlag(jint arg0) const
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint VerifiedKeyEvent::getKeyCode() const
	{
		return callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint VerifiedKeyEvent::getScanCode() const
	{
		return callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	jint VerifiedKeyEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void VerifiedKeyEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

