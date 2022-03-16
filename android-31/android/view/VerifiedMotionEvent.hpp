#pragma once

#include "../os/Parcel.def.hpp"
#include "../../java/lang/Boolean.def.hpp"
#include "../../JObject.hpp"
#include "./VerifiedMotionEvent.def.hpp"

namespace android::view
{
	// Fields
	inline JObject VerifiedMotionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedMotionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VerifiedMotionEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VerifiedMotionEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VerifiedMotionEvent::getActionMasked() const
	{
		return callMethod<jint>(
			"getActionMasked",
			"()I"
		);
	}
	inline jint VerifiedMotionEvent::getButtonState() const
	{
		return callMethod<jint>(
			"getButtonState",
			"()I"
		);
	}
	inline jlong VerifiedMotionEvent::getDownTimeNanos() const
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	inline java::lang::Boolean VerifiedMotionEvent::getFlag(jint arg0) const
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	inline jint VerifiedMotionEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	inline jfloat VerifiedMotionEvent::getRawX() const
	{
		return callMethod<jfloat>(
			"getRawX",
			"()F"
		);
	}
	inline jfloat VerifiedMotionEvent::getRawY() const
	{
		return callMethod<jfloat>(
			"getRawY",
			"()F"
		);
	}
	inline jint VerifiedMotionEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void VerifiedMotionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers
#include "./VerifiedInputEvent.hpp"

