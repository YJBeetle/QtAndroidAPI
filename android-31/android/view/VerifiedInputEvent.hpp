#pragma once

#include "../os/Parcel.def.hpp"
#include "./VerifiedInputEvent.def.hpp"

namespace android::view
{
	// Fields
	inline JObject VerifiedInputEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.VerifiedInputEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VerifiedInputEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint VerifiedInputEvent::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline jint VerifiedInputEvent::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jlong VerifiedInputEvent::getEventTimeNanos() const
	{
		return callMethod<jlong>(
			"getEventTimeNanos",
			"()J"
		);
	}
	inline jint VerifiedInputEvent::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline void VerifiedInputEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

