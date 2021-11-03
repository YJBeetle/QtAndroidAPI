#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../JObject.hpp"
#include "./VerifiedMotionEvent.hpp"

namespace android::view
{
	// Fields
	JObject VerifiedMotionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedMotionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	VerifiedMotionEvent::VerifiedMotionEvent(QJniObject obj) : android::view::VerifiedInputEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedMotionEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VerifiedMotionEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint VerifiedMotionEvent::getActionMasked() const
	{
		return callMethod<jint>(
			"getActionMasked",
			"()I"
		);
	}
	jint VerifiedMotionEvent::getButtonState() const
	{
		return callMethod<jint>(
			"getButtonState",
			"()I"
		);
	}
	jlong VerifiedMotionEvent::getDownTimeNanos() const
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	java::lang::Boolean VerifiedMotionEvent::getFlag(jint arg0) const
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint VerifiedMotionEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jfloat VerifiedMotionEvent::getRawX() const
	{
		return callMethod<jfloat>(
			"getRawX",
			"()F"
		);
	}
	jfloat VerifiedMotionEvent::getRawY() const
	{
		return callMethod<jfloat>(
			"getRawY",
			"()F"
		);
	}
	jint VerifiedMotionEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void VerifiedMotionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

