#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./LightState.def.hpp"

namespace android::hardware::lights
{
	// Fields
	inline JObject LightState::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.lights.LightState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LightState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint LightState::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint LightState::getPlayerId() const
	{
		return callMethod<jint>(
			"getPlayerId",
			"()I"
		);
	}
	inline JString LightState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LightState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

// Base class headers

