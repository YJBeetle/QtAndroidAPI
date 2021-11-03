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
	
	// QAndroidJniObject forward
	VerifiedMotionEvent::VerifiedMotionEvent(QAndroidJniObject obj) : android::view::VerifiedInputEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint VerifiedMotionEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VerifiedMotionEvent::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint VerifiedMotionEvent::getActionMasked()
	{
		return callMethod<jint>(
			"getActionMasked",
			"()I"
		);
	}
	jint VerifiedMotionEvent::getButtonState()
	{
		return callMethod<jint>(
			"getButtonState",
			"()I"
		);
	}
	jlong VerifiedMotionEvent::getDownTimeNanos()
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	java::lang::Boolean VerifiedMotionEvent::getFlag(jint arg0)
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint VerifiedMotionEvent::getMetaState()
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	jfloat VerifiedMotionEvent::getRawX()
	{
		return callMethod<jfloat>(
			"getRawX",
			"()F"
		);
	}
	jfloat VerifiedMotionEvent::getRawY()
	{
		return callMethod<jfloat>(
			"getRawY",
			"()F"
		);
	}
	jint VerifiedMotionEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void VerifiedMotionEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

