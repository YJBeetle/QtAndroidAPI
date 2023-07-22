#pragma once

#include "../os/Parcel.def.hpp"
#include "../../java/lang/Boolean.def.hpp"
#include "../../JObject.hpp"
#include "./VerifiedKeyEvent.def.hpp"

namespace android::view
{
	// Fields
	inline JObject VerifiedKeyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedKeyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VerifiedKeyEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VerifiedKeyEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VerifiedKeyEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline jlong VerifiedKeyEvent::getDownTimeNanos() const
	{
		return callMethod<jlong>(
			"getDownTimeNanos",
			"()J"
		);
	}
	inline java::lang::Boolean VerifiedKeyEvent::getFlag(jint arg0) const
	{
		return callObjectMethod(
			"getFlag",
			"(I)Ljava/lang/Boolean;",
			arg0
		);
	}
	inline jint VerifiedKeyEvent::getKeyCode() const
	{
		return callMethod<jint>(
			"getKeyCode",
			"()I"
		);
	}
	inline jint VerifiedKeyEvent::getMetaState() const
	{
		return callMethod<jint>(
			"getMetaState",
			"()I"
		);
	}
	inline jint VerifiedKeyEvent::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	inline jint VerifiedKeyEvent::getScanCode() const
	{
		return callMethod<jint>(
			"getScanCode",
			"()I"
		);
	}
	inline jint VerifiedKeyEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void VerifiedKeyEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
